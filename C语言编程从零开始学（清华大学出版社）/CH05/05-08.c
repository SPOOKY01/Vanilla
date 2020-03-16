#include<stdio.h>
int main()
{
	int a,b,max;
	printf("比较两个数的大小关系:\n");
	scanf("%d %d", &a, &b);
	printf("max = %d\n", a>b?a:b);//如果a>b为真,则把a赋予max,否则把b赋予max
	return 0;
}
