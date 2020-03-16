#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c;
	printf("a=%d\tb=%d\n",a,b);
	c = a + b;
	printf("a+b=%d\n",c);
	c = a - b;
	printf("a-b=%d\n",c);
	c = a * b;
	printf("a*b=%d\n",c);
	c = a / b;
	printf("a/b=%d\n",c);
	c = a % b;
	printf("a%%b=%d\n",c);
	return 0;
}
