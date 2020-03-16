#include<stdio.h>
int main()
{
	char c;
	printf("请输入一个字符：");
	c=getchar();
	putchar('\n');
	putchar(c);
	putchar('\n');
	putchar('A');
	putchar(66);//用ASCII编码输出
	putchar(97) ;//用ASCII编码输出小写字母a
	putchar('\n');
	return 0;
}
