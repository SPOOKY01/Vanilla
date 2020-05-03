#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	char ch;
	if ((fp = fopen("c:\\temp\\test2.txt", "wt+")) == NULL)
	{
		printf("不能打开文件，按任意键退出!\n");
		getchar();
		exit(0);//调用函数，exit(0)表示程序正常退出
		        //exit(1)/exit(-1)表示程序异常退出。
	}
	printf("在文件c:\\temp\\test2.txt中输入一个字符串：\n");
	ch = getchar();
	while (ch != '\n')
	{
		fputc(ch, fp);
		ch = getchar();
	}
	fclose(fp);
	return 0;
}
