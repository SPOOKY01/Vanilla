#include<stdio.h>
int main()
{
	int a,b,s1,s2;
	printf("请输入两个数:");
	scanf("%d %d",&a,&b);
	if(a>=b)
	{
		s1=a+b;
		s2=a-b;
		printf("s1=a+b=%d+%d=%d\n",a,b,s1);
		printf("s2=a-b=%d-%d=%d\n",a,b,s2);
	}
	else
	{
		s1=a*b;
		s2=b-a;
		printf("s1=a*b=%d*%d=%d\n",a,b,s1);
		printf("s2=b-a=%d-%d=%d\n",b,a,s2);
	}
	return 0;
}
