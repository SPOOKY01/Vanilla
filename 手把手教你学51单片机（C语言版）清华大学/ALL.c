
#include <reg52.h>//179
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
