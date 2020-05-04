#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int len;
	char str[20];
	if ((fp = fopen("c:\\temp\\test15.txt", "w")) == NULL)
	{
		printf("文件打开失败! \n");
		exit(0);
	}
	printf("输入字符串: \n");
	gets(str);
	fputs(str, fp);
	len = ftell(fp);
	printf("文件c:\\temp\\test15.txt的大小为 %d 字节\n", len);
	fclose(fp);
	return 0;
}
