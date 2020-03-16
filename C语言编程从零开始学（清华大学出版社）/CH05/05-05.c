#include<stdio.h>
int main()
{
	int a = 5;
	int b = 3;
	if(a&&b)
	{
		printf("表达式1:条件为真\n");
	}
	else
	{}
	if(a||b)
	{
		printf("表达式1:条件为真\n");
	}
	else
	{}
	a = 0;
	b = 10;
	if(a&&b)
	{
		printf("表达式2:条件为真\n");
	}
	else
	{
		printf("表达式2:条件不为真\n");
	}
	if(!(a&&b))
	{
		printf("表达式3:条件为真\n");
	}
	return 0;
}
