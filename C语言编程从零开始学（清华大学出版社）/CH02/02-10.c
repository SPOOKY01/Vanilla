#include<stdio.h>
int main()
{
	char str1[30],str2[30];
	printf("请输入一个字符串:");
	gets(str1);
	printf("请输入一个字符串:");
	gets(str2);
	printf("str1: %s\nstr2: %s\n", str1, str2);
	return 0;
}
