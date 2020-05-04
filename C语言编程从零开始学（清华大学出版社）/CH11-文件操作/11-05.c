#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[15];
	if((fp = fopen("c:\\temp\\test.txt", "w")) == NULL)//以只写方式打开一个文件，并判断是否为空
	{
		printf("文件打开失败! \n");
		exit(0);//调用函数，exit(0)表示程序正常退出，exit(1)/exit(-1)表示程序异常退出
	}
	printf("在文件c:\\temp\\test5.txt中输出一个字符串: \n");
	gets(str);
	fputs(str, fp);
	fclose(fp);
	return 0;
}
