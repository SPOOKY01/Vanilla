#include<stdio.h>
int main()
{
	char ch;
	FILE *fp;
	fp = fopen("c:\\temp\\test2.txt", "r");
	if (fp != NULL)
	{
		ch = fgetc(fp);
		while (ch != EOF)
		{
			putchar(ch);
			ch = fgetc(fp);
		}
	}
	else
	{
		printf("无法打开文件! \n");
		fclose(fp);
	}
	return 0;
}
