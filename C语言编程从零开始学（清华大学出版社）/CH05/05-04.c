#include<stdio.h>
int main()
{
	int a = 15;
	int b = 10;
	if(a==b)
	{
		printf("表达式1:a等于b\n");
	}
	else
	{
		printf("表达式1:a不等于b\n");
	}
	if(a<b)
	{
		printf("表达式2:a小于b\n");
	}
	else
	{
		printf("表达式2:a不小于b\n");
	}
	if(a>b)
	{
		printf("表达式3:a大于b\n");
	}
	else
	{
		printf("表达式3:a不大于b\n");
	}
	a = 4;
	b = 7;
	if(a<=b)
	{
		printf("表达式4:a小于或等于b\n");
	}
	else
	{
		printf("表达式5:a大于b\n");
	}
	if(b>=a)
	{
		printf("表达式6:b大于或等于a\n");
	}
	else
	{
		printf("表达式7:b小于a\n");
	}
	return 0;
}
