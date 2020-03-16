#include<string.h>
#include<stdio.h>
int main()
{
	char c, s[40];
	int a=1234;
	float f=3.1415926;
	double x=0.12345678987654321;
	puts("Hello,China!");
	gets(s);//获取字符串
	printf("我的C程序：");
	puts(s);
	strcpy(s, "Hello, China");//复制字符串，把后者结果复制到前者上
	c='\x41';
	printf("a=%d\n",a);//结果输出十进制整数a=1234
	printf("a=%6d\n",a);//结果输出六位十进制数a=  1234
	printf("a=%06d\n",a);//结果输出六位十进制数a=001234
	printf("a=%2d\n",a);//a超过两位，按实际值输出a=1234
	printf("f=%f\n",f);//输出浮点数f=3.141593
	printf("f=6.4f\n",f);//输出六位其中小数点后四位的浮点数f=3.1416
	printf("x=%lf\n",x);//输出长浮点数x=0.123457
	printf("x=%18.16lf\n",x);//输出18位其中小数点后16位的长浮点数x=0.1234567898765432
	printf("c=%c\n,c");//输出字符c=A
	printf("c=%x\n",c);//输出字符的ASCII码值c=41
	printf("s[]=%s\n",s);//输出数组字符串s[]=Hello,China
	printf("s[]=%6.9s\n",s);//输出最多9个字符的字符串s[]=Hello,Ch
	return 0;
}
