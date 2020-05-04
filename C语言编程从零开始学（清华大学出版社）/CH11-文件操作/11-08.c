#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
	int day;
	char course[10];
}table;
int main()
{
	FILE* fp;
	int i;
	table tab[3];
	tab[0].day = 1;
	strcpy(tab[0].course, "Maths"); 
	tab[1].day = 2;
	strcpy(tab[1].course, "Chinese"); 
	tab[2].day = 3;
	strcpy(tab[2].course, "English"); 
	if ((fp = fopen("c:\\temp\\test8.txt", "wb")) == NULL)
	{
		printf("文件打开失败! \n");
		exit(0);
	}
	printf("课程表 \n");
	printf("1\tMaths\n");
	printf("1\tChinese\n");
	printf("2\tEnglish\n");
	for (i = 0; i < 3; i++)
	{
		if (fwrite(&tab[i], sizeof(table), 1, fp) != 1)
		{
			printf("写入失败! \n");
		}
	}
	printf("写入成功! \n");
	fclose(fp);
	return 0;
}
