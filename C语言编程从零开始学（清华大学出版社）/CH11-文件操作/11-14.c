#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[20];
	if ((fp = fopen("c:\\temp\\test.txt", "w+")) == NULL)
	{
		printf("文件打开失败! \n");
		getchar();
		exit(0);
	}
	printf("写入字符串: \n");
	gets(str);
	fputs(str, fp);
	fseek(fp, 8, SEEK_SET);
	fputs("C Program", fp);
	printf("读取字符串: \n");
	rewind(fp);
	fgets(str, 18, fp);
	printf("%s\n", str);
	fclose(fp);
	return 0;
}
