#include<stdio.h>
int main()
{
	int a,b;
	b = 1;
	printf("b=%d\n",b);
	printf("请输入:");
	scanf("%d",&a);
	if(a>0)
	{
		b=a;
	}
	printf("a=%d b=%d\n",a,b);
	return 0;
}
