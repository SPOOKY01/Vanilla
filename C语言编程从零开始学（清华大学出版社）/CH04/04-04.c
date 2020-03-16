#include<stdio.h>
bool main()
{
	bool a;
	printf("请输入a=");
	scanf("%d",&a);
	if(a!=0)
	{
		printf("l\n");
	}
	else
	{
		printf("0\n");
	}
	printf("sizeof(bool)=%d\n",sizeof(bool));
	return 0;
}
