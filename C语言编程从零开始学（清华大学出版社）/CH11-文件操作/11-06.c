#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	char str[15];
	if ((fp = fopen("c:\\temp\\test5.txt", "r")) == NULL)
	{
		printf("文件打开失败! \n");
		getchar();
		exit(0);
	}
	printf("读取文件c:\\temp\\test5.txt中的字符串: \n");
	fgets(str, 15, fp);
	printf("%s\n", str);
	fclose(fp);
	return 0;
}
