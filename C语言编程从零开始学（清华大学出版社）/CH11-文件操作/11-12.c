#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	char name[30];
	char str1[50], str2[50], str3[50], str4[50];
	printf("请输入文件名: \n");
	gets(name);
	if ((fp = fopen(name, "r")) == NULL)
	{
		printf("文件打开失败! \n");
		getchar();
		exit(0);
	}
	fscanf(fp, "%s\n%s\n%s\n%s\n%s\n", str1, str2, str3, str4);
	printf("文件内容为: n");
	printf("\n");
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);
	fclose(fp);
	printf("\n按任意键结束...\n");
	return 0;
}
