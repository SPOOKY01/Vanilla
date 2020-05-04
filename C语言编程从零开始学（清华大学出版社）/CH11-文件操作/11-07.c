#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	int i, arr[5];
	printf("请输入5个整数，以Enter键结束: \n");
	for (i = 0; i < 5; i = i +1)
	{
		scanf("%d", &arr[i]);
	}
	if ((fp = fopen("c:\\temp\\test7.txt", "w+")) == NULL)
	{
		printf("文件打开失败! \n");
		exit(0);
	}
	fwrite(arr, sizeof(int), 5, fp);
	fclose(fp);
	return 0;
}
