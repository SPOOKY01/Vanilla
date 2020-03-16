#include<stdio.h>
void fun()
{
	char a = 'C';                    //定义char型变量
	short s = 6;                     //定义short型变量
	int b = 2;                       //定义int型变量
	float c = 5.6;                   //定义float型变量
	double result = a+s+b+c;         //定义double型变量
	printf("result=%f\n",result);    //显示结果
}
int main()
{
	fun();
	return 0;
}
/*本例用于演示数据类型间的混合运算，在代码中首先定义变量并赋值，分别为char型a
初始化为'C',short型的s初始化为6，int型的b初始化为2，float型的c初始化为5.6
还有double型的result，用来存放各种类型变量相加后的值。通过printf()函数，发现最后结果是一个实型数据。*/
