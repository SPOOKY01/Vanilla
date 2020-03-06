#include<reg52.h>//60
sbit LED = P0^0;
sbit ???
???
void main()
{
    unsigned char cnt = 0;//

    ENLED = 0;//74HC138
    TMOD = 0x01;
    TH0 = 0xB8;
    TL0 = 0X00;
    TR0 = 1;

    while(1)
    {
        if(TF0 == 1)
        {
            TF0 = 0;
            TH0 = 0xB8;
            TL0 = 0x00;
            cnt++;
            if(cnt >= 50)
            {
                cnt = 0;
                LED = ~LED;
            }
        }
    }
}
#include<reg52.h>//79
sbit --------;
unsigned char code LedChar[] = 
{
    0xC0,0xF9,oxA4,0xB0,0x99,0x92,0x82,0xF8,
    0x80,0x90,0x88,0x83,0xC6,0xA1,0x86,0x8E,
};
unsigned char LedBuff[6] = 
{
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
};
unsigned char i = 0;
unsigned int cnt = 0;
unsigned char flag1s = 0;
void main()
{
    unsigned long sec = 0;
    EA = 1;
    ENLED = 0;
    ADDR3 = ?;
    TMOD = 0x01;
    TH0 = 0xFC;
    TL0  = 0x67;
    ET0 = 1;
    TR0 = 1;
    while(1)
    {
        if(flag1s == 1)
        {
            flag1s = 0;
            sec++;
            LedBuff[0] = LedChar[sec%10]；
            LedBuff[1] = LedChar[sec/10%10]；
            LedBuff[2] = LedChar[sec/100%10]；
            LedBuff[3] = LedChar[sec/1000%10]；
            LedBuff[4] = LedChar[sec/10000%10]；
            LedBuff[5] = LedChar[sec/100000%10]；
        }
    }
}
//
void InterruptTime0() iterrupt 1
{
    TH0 = 0xFC;
    TL0 = 0x67;
    cnt++;
    if(cnt >= 1000)
    {
        cnt = 0;
        flag1s = 1;
    }
    //
    PO = 0xFF
    switch(i)
    {
        case0:ADDR2 = 0;ADDR1 = 0;ADDRO = 0;i++;P0 = LedBuff[0];break;
        case1:ADDR2 = 0;ADDR1 = 0;ADDRO = 1;i++;P0 = LedBuff[1];break;
        case2:ADDR2 = 0;ADDR1 = 1;ADDRO = 0;i++;P0 = LedBuff[2];break;
        case3:ADDR2 = 0;ADDR1 = 1;ADDRO = 1;i++;P0 = LedBuff[3];break;
        case4:ADDR2 = 1;ADDR1 = 0;ADDRO = 0;i++;P0 = LedBuff[4];break;
        case5:ADDR2 = 1;ADDR1 = 0;ADDRO = 1;i=0;P0 = LedBuff[5];break;
        default:break;
    }
}




#include<reg52.h>//145

sbit BUZZ = P1^6;
unsigned char T0RH = 0;
unsigned char T0RL = 0;

void OpenBuzz(unsigned int frequ);
void StopBuzz()

void mian()
{
    unsigned int i;

    TMOD = 0x01;
    EA = 1;

    while(1)
    {
        OpenBuzz(4000);
        for(i = 0; i<40000; i++);
        StopBuzz();
        for(i = 0; i<40000; i++);    
        OpenBuzz(1000);
        for(i = 0; i<40000; i++);
        StopBuzz();
        for(i = 0; i<40000; i++);
    }
}
/*蜂鸣器启动函数*/
void OpenBuzz(unigned int frequ)
{
    unsigned int reload;

    reload = 65536 - (110592/12)/(frequ*2);
    T0RH = (unsigned char)(reload>>8);
    T0RH = (unsigned char)reload;
    TH0 = 0xFF;
    TL0 = 0xFF;
    ET0 = 1;
    TR0 = 1;
}
/*蜂鸣器停止函数*/
void StopBuzz()
{
    ET0 = 0;
    TR0 = 0;
}
/*~~~*/
void InterruptTimer0() interrupt 1
{
    TH0 = TORH;
    TL0 = TORL;
    BUZZ = ~BUZZ;
}
#include<reg52.h>//179
sbit PIN_RXD = P3^0;//接收引脚定义
sbit PIN_TXD = P3^1;//发送引脚定义

bit RxdOrTxd = 0;//指示当前状态为接受还是发送
bit RxdEnd = 0;//接收结束标志
bit TxdEnd = 0;//发送结束标志
unsigned char RxdBuf = 0;//接收缓冲器
unsigned char TxdBuf = 0;//发送缓冲器

void ConfigUART(unsigned int band);
void StartTXD(unsigned char dat);
void StartRXD();

void main()
{
    EA = 1;
    ConfigUART(9600);

    while(1)
    {
        while(PIN_RXD);
        StartRXD();
        while(!RxdEnd);
        StartTXD(RxdBuf + 1);
        while(!TxdEnd);
    }
}
/*串口配置函数。。。*/
void ConfigUART(unsigned int baud)
{
    TMOD &= 0xF0;
    TMOD |= 0x02;
    TH0 = 256 - (11059200/12)/baud;
}
/*启动串行发送*/
void StartRXD()
{
    TL0 = 256 - ((256 - TH0)>>1);
    ET0 = 1;
    TR0 = 1;
    RxdEnd = 0;
    RxdOrTxd = 0;
}
/*启动串行发送*/
void StartTXD(unsigned char dat)
{
    TxdBuf = dat;
    TL0 = TH0;
    ET0 = 1;
    TR0 = 1;
    PIN_TXD = 0;
    TxdEnd = 0;
    RxdOrTxd = 1;
}
/*中断服务函数，处理串行发送和接收*/
void InterruptTimer0() interrupt1
{
    static unsigned char cnt = 0;

    if(RxdOrTxd)
    {
        cnt++;
        if(cnt <= 8)
        {
            PIN_TXD = TxdBuf & 0x01;
            TxdBuf >>= 1;
        }
        else if(cnt == 9)
        {
            PIN_TXD = 1;
        }
        else
        {
            cnt = 0;
            TR0 = 0;
            TxdEnd = 1;
        }
    }
    else
    {
        if(cnt == 0)
        {
            if(!PIN_TXD)
            {
                RxdBuf = 0;
                cnt++;
            }
            else
            {
                TR0 = 0;
            }
        }
        else if(cnt <= 8)
        {
            RxdBuf >>=1;
            if(PIN_RXD)
            {
                RxdBuf |= 0x80;
            }
            cnt++;
        }
        else
        {
            cnt = 0;
            TR0 = 0;
            if(PIN_RXD)
            {
                RxdEnd = 1;
            }
        }
    }
}
#icnlude<reg52.h>//184

void ConfigUART(unsigned int baud);

void main()
{
    ConfigUATR(9600)//

    while(1)
    {
        while(!RI);//
        RI = 0;
        SBUF = SBUF + 1;
        while(!TI);
        TI = 0;
    }
}
//
void ConfigUART(unsigned int baud)
{
    SCON = 0x50;
    TMOD &= 0x0F;
    TMOD |= 0X20;
    TH1 = 256 - (11059200/12/32)/baud;
    TL1 = TH1;
    ET1 = 0;
    TR1 = 1;
}

#include<reg52.c>//185

void ConfigUART(unsigned int baud)

void main()
{
    EA = 1;//
    ConfigUART(9600);//配置波特
    while(1);
}
//
void ConfigUART(unsigned int baud)
{
    SCON = 0x50;//
    TMOD &= 0x0F;
    TMOD |= 0x20;
    TH1 = 256 - (11059200/12/32)/baud;
    TL1 = TH1;
    ET1 = 0;
    ES = 1;
    TR1 = 1;
}
//
void InterruptUART() interrput 4
{
    if(RI)
    {
        RI = 0;
        SBUF = SBUF + 1;
    }
    if(TI)
    {
        TI = 0;
    }
}




#include<reg52.h>//209
#define LCD1602_DB P0
sbit LCD1602_RS = P1^0;
sbit LCD1602_RW = P1^1;
sbit LCD1602_E = P1^5;

void IntLcd1602();
void LcdShowStr(unsigned char x, unsigned char y, unsigned char *str);

void main()
