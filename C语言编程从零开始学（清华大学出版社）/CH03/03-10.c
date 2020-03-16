//求奇数的阶乘
#include<stdio.h>
int main()
{
	int n,i;
	long t,sum = 1;
	printf("请输入一个奇数:\n");
	scanf("%ld",&n);
	for(i=3,t=1;i<=n;i+=2)
	{
		t *=i * (i-1);
		sum +=t;
	}
	printf("%ld\n",sum);
	return 0;
}
