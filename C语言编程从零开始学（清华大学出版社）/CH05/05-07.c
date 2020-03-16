#include<stdio.h>
int main()
{
	unsigned int a = 60;//定义无符号整形变量
	printf("输入一个数:a=60\n");//a = 60 对应的二进制编码 0011 1100
	a=a>>3;              //右位移 a = 7 对应的二进制编码 0000 0111
	printf("a>>3的值=%d\n",a);
	a=a<<3;              //左位移 a = 56 对应的二进制编码 0011 1000
	printf("a<<3的值=%d\n",a);
	return 0;
}
