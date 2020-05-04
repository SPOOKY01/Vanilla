#include<stdio.h>
#define N 4
struct student
{
	char name[20];
	char sex[4];
	int age;
	float height;
	float weight;
}boys[N];
int main()
{
	FILE *fp;
	int i;
	printf("请录入学生体检信息: \n");
	printf("(姓名-性别-年龄-身高-体重)\n");
	if ((fp = fopen("c:\\temp\\test19.txt", "wb")) == NULL)
	{
		printf("文件打开失败! \n");
		getchar();
		return 0;
	}
	for (i = 0; i < 4; i = i + 1)
	{
		printf("第%d个学生 \n", i + 1);
		scanf("%s %s %d %f %f", boys[i].name, boys[i].sex, &boys[i].age, &boys[i].height, &boys[i].weight);
		printf("\n");
	}
	for (i = 0; i < 4; i++)
	{
		if (fwrite(&boys[i], sizeof(struct student), 1, fp) != 1)
		{
			printf("数据写入失败 \n");
		}
	}
	fclose(fp);
	if ((fp = fopen("c:\\temp\\test19.txt", "rb")) == NULL)
	{
		printf("文件打开失败! \n");
		getchar();
		return 0;
	}
	printf("\n");
	printf("姓名\t性别\t年龄\t身高\t体重: \n");
	for (i = 0; i < 4; i = i + 1)
	{
		fseek(fp, i * sizeof(struct student), 0);
		fread(&boys[i], sizeof(struct student), 1, fp);
		printf("%s\t%s\t%d\t%.2f\t%.2f\n", boys[i].name, boys[i].sex, boys[i].age, boys[i].height, boys[i].weight);
	}
	fclose(fp);
	return 0;
}
