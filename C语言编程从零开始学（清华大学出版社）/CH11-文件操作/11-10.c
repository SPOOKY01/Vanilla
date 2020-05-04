#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int day;
	char course[10];
}table;
int main()
{
	FILE* fp;
	table tab;
	if ((fp = fopen("c:\\temp\\test8.txt", "rb")) == NULL)
	{
		printf("文件打开失败! \n");
		exit(0);
	}
	printf("课程表 \n");
	printf("星期\t课程\n");
	while (fread(&tab, sizeof(table), 1, fp) == 1)
	{
		printf(" %d\t%s\n", tab.day, tab.course);
	}
	fclose(fp);
	return 0;
}
