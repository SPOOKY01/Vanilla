#include<stdio.h>
int main()
{
	int a=3,b=2,c;
	printf("a=%d,b=%d\n",a,b);
	printf("a=%d\n",a,b,c);
	printf("a=%d,b=%d,c=%d\n",a,b);
	printf("c=%d\n",c=a+b);
	printf("a=%d",a=a+3);
	return 0;
}
