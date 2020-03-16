#include<stdio.h>
extern int sum;//声明变量
int main()
{
	float a,b;
	float sum;
	a=1.5;
	b=1.5;
	sum=a+b;
	printf("a=%.2f,b=%.2f\n",a,b);
	printf("a+b=%.2f\n",sum);
	return 0;
}
