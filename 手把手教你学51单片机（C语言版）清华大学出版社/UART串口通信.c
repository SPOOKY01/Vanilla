#include <reg52.h>
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
