#include<stdio.h>
int main()
{
	unsigned int x = 60;//60对应的二进制0011 1100
	unsigned int y = 17;//17对应的二进制0001 0001
	int z = 0;
	printf("x=%d二进制(0011 1100)\n y=%d二进制(0001 0001)\n",x,y);
	z = x & y;//z=16对应的二进制 0001 0000
	printf("x & y的值是 %d\n",z);
	z = x | y;//z=61对应的二进制 0011 1101
	printf("x | y的值是 %d\n",z);
	z = x ^ y;//z=45对应的二进制 0010 1101
	printf("x ^ y的值是 %d\n",z);
	z = ~x;//z=-61对应的二进制 1100 0011
	printf("~ x 的值是 %d\n",z);
}
