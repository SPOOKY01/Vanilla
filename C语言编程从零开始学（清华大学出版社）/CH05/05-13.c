#include<stdio.h>
int main()
{
	int a,b;
	printf("输入两个数A,B:\n");
	scanf("%d %d",&a,&b);
	if(a!=b)
	{
		if(a>b)
		{
			printf("A>B\n");
		}
		else
		{
			printf("A<B\n");
		}
	}
	else
	{
		printf("A=B\n");
	}
	return 0;
}
