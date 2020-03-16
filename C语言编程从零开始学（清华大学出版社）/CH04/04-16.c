#include<stdio.h>
void fun()
{
	static int add =1;
	add=add+1;
	printf("%d\n",add);
}
int main(int argc, char* argv[])
{
	printf("第一次调用结果: ");
	fun();
	printf("第二次调用结果: ");
	fun();
	return 0;
}
