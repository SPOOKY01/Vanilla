#include<stdio.h>
int main()
{
	int x,y,z;
	printf("请输入两个值:\n");
	scanf("%d %d",&x,&y);
	z=x+y;
	printf("x=%d, y=%d\n",x,y);
	printf("x+y=%d\n",z);
	return 0;
}
