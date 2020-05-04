#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str;
	if ((fp = fopen("c:\\temp\\test17.txt", "w")) == NULL)
	{
		printf("文件打开失败! \n");
		getchar();
		exit(0);
	}
	printf("读取数据...\n");
	str = fgetc(fp);
	if (ferror(fp))
	{
		printf("读取文件: c:\\temp\\test17.txt 时发生错误! \n");
	}
	fclose(fp);
	return 0;
}
