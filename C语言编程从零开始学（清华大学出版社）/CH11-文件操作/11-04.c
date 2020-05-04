#include<stdio.h>
int main()
{
	FILE* fp;
	char ch;
	if ((fp=fopen("c:\\temp\\test4.txt", "w")) == NULL)
	{
		printf("文件打开失败!\n");
		getchar();
	}
	printf("在文件c:\\temp\\test4.txt中写入一个字符串: \n");
	ch = getchar();
	while (ch != '\n')
	{
		fputc(ch, fp);
		ch = getchar();
	}
	fclose(fp);
	if ((fp = fopen("c:\\temp\\test4.txt", "r")) == NULL)
	{
		printf("文件打开失败~ \n");
	}
	printf("\n");
	printf("在文件c:\\temp\\test4.txt中读出一个字符串: \n");
	while ((ch = fgetc(fp)) != EOF)
	{
		putchar(ch);
	}
	fclose(fp);
	printf("\n");
	return 0;
}
