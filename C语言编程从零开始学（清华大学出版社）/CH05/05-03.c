#include<stdio.h>
int main()
{
	int a,b;
	printf("后置自增运算:a++\n");
	a = 4;
	b = a++;//赋值后，再+1。b=4、a=5
	printf("b = %d\n", b );
	printf("a = %d\n", a );
	printf("后置自减运算:a--\n");
	a = 4;
	b = a--;//赋值后，再-1。b=4、a=3
	printf("b = %d\n", b );
	printf("a = %d\n", a );
	printf("前置自增运算:++a\n");
	a = 4;
	b = ++a;//变量先+1，再赋值。b=5、a=5
	printf("b = %d\n", b );
	printf("a = %d\n", a );
	printf("前置自减运算:--a\n");
	a = 4;
	b = --a;//变量先-1，再赋值。b=3、a=3
	printf("b = %d\n", b );
	printf("a = %d\n", a );
	return 0;
}
