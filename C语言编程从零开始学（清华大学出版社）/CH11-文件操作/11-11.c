#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	fp = fopen("c:\\temp\\test11.txt", "w+");
	printf("备忘录\n");
	printf("日期\t星期\t时间\t事件\n");
	fprintf(fp, "%s\n", "备忘录");
	fprintf(fp, "%s\t%s\t%s\t%s\n", "日期", "星期", "时间", "事件");
	fprintf(fp, "%s\t%s\t%s\t%s\n", "2018/05/04", "周五", "15:00", "考试");
	fclose(fp);
	return 0;
}
