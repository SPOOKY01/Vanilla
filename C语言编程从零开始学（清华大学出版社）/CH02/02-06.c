#include<stdio.h>
int main()
{
	float a=5.4321;
	long b=12345678;
	printf("a=%.3f\n",a);
	printf("b=%lb\n",b);
	printf("%7.3s","program");//.3表示去字符串左端3为为"pro"，长度小于7，右对齐输出"pro"，左端补充空格
	printf("%s\n","|");//用于验证输出字符串的末尾
	return 0;
}
