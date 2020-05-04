#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str;
	if ((fp = fopen("c:\\temp\\test16.txt", "r")) == NULL)//
	{
		printf("文件打开失败! \n");
		getchar();
		exit(0);
	}
	printf("读出文件内容: \n");
	while (1)
	{
		str = fgetc(fp);
		if (feof(fp))
		{
			break;
		}
		printf("%c", str);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
