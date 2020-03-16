#include<stdio.h>
int main()
{
	int i,j,sum;
	sum=0;
	printf("请输入一个数，用于求和:");
	scanf("%d",&j);
	printf("计算1-100+的和\n");
	for(i=1;i<=j;i++)
	{
		sum=sum+i;
	}
	printf("sum=%d\n",sum);
	return 0;
}
