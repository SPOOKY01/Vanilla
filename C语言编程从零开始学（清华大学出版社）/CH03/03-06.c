#include<stdio.h>
int main()
{
	int a,b,c,Max;
	printf("请输入三个数：");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		Max=a;
	}
	else
	{
		Max=b;
	}
	if(c>Max)
	{
		Max=c;
	}
	printf("Max=%d\n",Max);
	return 0;
}
