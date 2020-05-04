#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str;;
	if ((fp = fopen("c:\\temp\\test18.txt", "r+")) == NULL)
	{
		printf("文件打开失败! \n");
		getchar();
		exit(0);
	}
	fputc('A', fp);
	if (ferror(fp))
	{
		printf("读取文件: c:\\temp\\test18.txt 时发生错误! \n");;
	}
	clearerr(fp);//清除错误标志
	str = fgetc(fp);
	if (!ferror(fp))
	{
		printf("成功读取文件内容! \n");
	}
	fclose(fp);
	return 0;
}
