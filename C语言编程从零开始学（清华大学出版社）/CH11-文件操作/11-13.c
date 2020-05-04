#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	char ch;
	fp = fopen("c:\\temp\\test13.txt", "r+");
	if (fp == NULL)
	{
		printf("打开文件失败! \n");
		getchar();
		exit(0);
	}
	printf("在文件c:\\temp\\test13.txt中输入字符串: ");
	ch = getchar();
	while (ch != '\n')
	{
		fputc(ch, fp);
		ch = getchar();
	}
	printf("读取文件中第一个字符: ");
	rewind(fp);
	putchar(fgetc(fp));
	fclose(fp);
	printf("\n按任意键结束...\n");
	return 0;
}
