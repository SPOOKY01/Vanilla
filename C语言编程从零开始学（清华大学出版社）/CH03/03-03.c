//求阶乘
#include<stdio.h>
int main()
{
	int i,j,k;
	printf("请输入一个整数：");
	scanf("%d",&k);
	i=1;
	j=1;
	while(i<=k)
	{
		j=j*i;
		i++;
	}
	printf("这个数的阶乘是=%d\n",j);
	return 0;
}
