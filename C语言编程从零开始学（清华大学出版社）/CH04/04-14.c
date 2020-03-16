#include<stdio.h>
int main()
{
	char a,b;
	a='a';
	b='b';
	a=a-32;
	b=b-32;
	printf("%c,%c\n%d,%d\n",a,b,a,b);//ASCII参与运算
	return 0;
}
