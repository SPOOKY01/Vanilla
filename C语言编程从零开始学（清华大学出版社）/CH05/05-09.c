#include<stdio.h>
int main()
{
	int x=3,y=4,z=7,a,b;
	a = (x+y,x+z);//表达式2的计算结果作为整个逗号表达式的值
	printf("第一个逗号表达式的值:a=%d\n",a);
	a = (b=z-x,x+z,y*z);//逗号表达式的嵌套形式
	printf("第二个逗号表达式的值:a=%d\n",a);
	printf("表达式1的值:b=%d\n",b);
	return 0;
}
