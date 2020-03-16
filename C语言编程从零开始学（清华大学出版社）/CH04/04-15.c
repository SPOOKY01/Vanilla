#include<stdio.h>
void fun()
{
	auto int add = 1;             //定义auto整型变量
	add = add+1;                  //变量+1
	printf("%d\n",add);           //显示结果
}
int main()
{
	printf("第一次调用结果:");    //显示结果
	fun();                        //调用fun()函数
	printf("第二次调用结果:");    //显示结果
	fun();						  //调用fun()函数
	return 0;					  //程序结束
}
