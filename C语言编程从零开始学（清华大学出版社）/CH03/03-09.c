#include<stdio.h>
int main()
{
	int i;
	printf("符合条件的如下:\n");
	for(i=0;i<=100;i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
