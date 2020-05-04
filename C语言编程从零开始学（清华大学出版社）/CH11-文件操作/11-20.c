#include<stdio.h>
#include<stdlib.h>
struct course
{
	char AM[20];
	char noon[20];
	char afternoon[20];
	char night[20];
}cou[5];
int main()
{
	FILE* fp;
	int i;
	printf("暑期学习计划安排表: \n");
	printf("(上午 - 中午 - 下午 - 晚上)\n");
	for (i = 0; i < 5; i = i + 1)
	{
		printf("第 %d 节课程\n", i + 1);
		scanf("%s %s %s %s", cou[i].AM, cou[i].noon, cou[i].afternoon, cou[i].night);
	}
	if ((fp = fopen("c:\\temp\\test20.txt", "w")) == NULL)
	{
		printf("文件打开\n");
		getchar();
		return 0;
	}
	fprintf(fp, "%s\t%s\t%s\t%s\n", "上午", "中午", "下午", "晚上");
	for (i = 0; i < 5; i = i + 1)
	{
		fprintf(fp, "%s\t%s\t%s\t%s\n", cou[i].AM, cou[i].noon, cou[i].afternoon, cou[i].night);
		if (ferror(fp))//检查文件写入是否发生错误
		{
			printf("数据写入失败! \n");
			clearerr(fp);//清除文件错误标志
		}
	}
	fclose(fp);//关闭文件
	if ((fp = fopen("c:\\temp\\test20.txt", "r")) == NULL)
	{
		printf("文件打开失败! \n");
		getchar();
		return 0;
	}
	printf("\n");
	printf("安排表: \n");
	for (i = 0; i <= 5; i = i + 1)
	{
		fseek(fp, i * sizeof(struct course), 0);
		fscanf(fp, "%s\t%s\t%s\t%s\n", cou[i].AM, cou[i].noon, cou[i].afternoon, cou[i].night);//读取文件
		printf("%s\t%s\t%s\t%s\n", cou[i].AM, cou[i].noon, cou[i].afternoon, cou[i].night);
	}
	fclose(fp);
	return 0;
}
