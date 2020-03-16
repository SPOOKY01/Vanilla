#include<stdio.h>//整形变量的6类定义
int main()
{
	int i=6;//有符号基本整形
	unsigned ui=9;//无符号基本整型
	short si=6;//有符号短整型
	unsigned short usi=7;//无符号短整型
	long li=3;//有符号长整形
	unsigned long uli=4;//无符号长整形
	printf("有符号基本整形变量 i=%d\n",i);
    printf("无符号基本整形变量 ui=%d\n",ui);
    printf("有符号短整型变量   si=%d\n",si);
	printf("无符号短整型变量   usi=%d\n",usi);
	printf("有符号长整形变量   li=%d\n",li);
	printf("无符号长整形变量   uli=%d\n",uli);
	return 0;
}
