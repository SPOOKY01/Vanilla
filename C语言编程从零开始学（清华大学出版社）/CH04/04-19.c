#include<stdio.h>
void fun()
{
	short int a;
	int b;
	long int c;
	unsigned short int d;
	unsigned int e;
	unsigned long int f;
	char g;
	float h;
	double i;
	long double j;
	printf("      短整型  数据类型的长度为：%d\n",sizeof(a));
	printf("        整型  数据类型的长度为：%d\n",sizeof(b));
	printf("      长征型  数据类型的长度为：%d\n",sizeof(c));
	printf("无符号短整型  数据类型的长度为：%d\n",sizeof(d));
	printf("无符号  整型  数据类型的长度为：%d\n",sizeof(e));
	printf("无符号长整型  数据类型的长度为：%d\n",sizeof(f));
	printf("字符型        数据类型的长度为：%d\n",sizeof(g));
	printf("单精度  实型  数据类型的长度为：%d\n",sizeof(h));
	printf("双精度  实型  数据类型的长度为：%d\n",sizeof(i));
	printf("长双精度实型  数据类型的长度为：%d\n",sizeof(j));
}
int main()
{
	fun();
	return 0;
}
