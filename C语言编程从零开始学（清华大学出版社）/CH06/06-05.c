#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入两个数:");
	scanf("%d %d", &a, &b);
	printf("max=%d\n",a>b?a:b);//如果表达式为真，就打印a，否则打印b
	return 0;
}
