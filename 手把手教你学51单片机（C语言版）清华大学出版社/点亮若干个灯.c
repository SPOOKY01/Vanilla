#include <reg52.h>

sbit LED1 = P2^0;
sbit LED2 = P2^1;
sbit LED3 = P2^2;
sbit LED4 = P2^3;

void main()
{
	LED1 = 1;
	LED2 = 0;
	LED3 = 1;
	LED4 = 0;
}
