#include<stdio.h>
int main()
{
	int i;
	printf("请输入年份：");
	scanf("%d",&i);
	if(i%4!=0)
	{
		printf("%d不是闰年\n",i);
	}
	else
	{
		if(i%100!=0)
		{
			printf("%d是闰年\n",i);
		}
		else
		{
			if(i%400!=0)
			{
				printf("%d不是闰年\n",i);
			}
			else
			{
				printf("%d是闰年\n",i);
			}
		}
	}
	return 0;
}
