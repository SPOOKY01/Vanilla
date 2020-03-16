#include<stdio.h>
int main()
{
	int a=15;
	int c;
	c = a;
	printf("运算符1:   =表达式: c的值=%d\n",c);
	c += a;
	printf("运算符2:  +=表达式: c的值=%d\n",c);
	c -= a;
	printf("运算符3:  -=表达式: c的值=%d\n",c);
	c *= a;
	printf("运算符4:  *=表达式: c的值=%d\n",c);
	c /= a;
	printf("运算符5:  /=表达式: c的值=%d\n",c);
	c = 200;
	c %= a;
	printf("运算符6:  %%=表达式: c的值=%d\n",c);
	return 0;
}
