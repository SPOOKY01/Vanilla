#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个正数:");
	scanf("%d", &a);
	if(a%2==0 && a!=0)
	{
		printf("这是一个偶数~~~\n");
	}
	else
	{
		printf("这是一个奇数~~~\n");
	}
	return 0;
}
