#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	int i, arr[5];
	if ((fp = fopen("c:\\temp\\test7.txt", "rb")) == NULL)
	{
		printf("文件打开失败! \n");
		exit(0);
	}
	fread(arr, sizeof(int), 5, fp);
	printf("读取文件c:\\temp\\test7.txt中的数据: \n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
