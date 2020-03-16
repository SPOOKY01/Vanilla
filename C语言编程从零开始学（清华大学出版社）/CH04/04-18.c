#include<stdio.h>//用extern声明外部变量，扩展程序文件中的作用域
int max(int x,int y)
{
	int z;
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
	return 0;
}
int main()
{
	extern A,B;
	printf("max=%d\n",max(A,B));
	return 0;
}
int A=9;
int B=2;
