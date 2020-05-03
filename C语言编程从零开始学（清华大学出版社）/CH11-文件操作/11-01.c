/*
FILE文件结构在"stdio.h"头文件中的文件类型声明为：
typedef struct
{
short level;                       //缓冲区“满”或“空”的程度
unsigned flags;                    //文件状态标志
char fd;                           //文件描述符
unsigned char hold;                //如无缓冲区不读取字符
short bsize;                       //缓冲区大小
unsigned char *buffer;             //数据缓冲区的位置
unsigned char *curp;               //指针，当前的指向
unsigned istemp;                   //临时文件，指示器
short token;                       //有效性检查
}FILE;
*/
#include<stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("c:\\temp\\test1.txt", "r");
	if (fp == NULL)
	{
		printf("无法打开文件! \n");
	}
	else
	{
		printf("文件打开成功! \n");
		fclose(fp);
	}
	return 0;
}
