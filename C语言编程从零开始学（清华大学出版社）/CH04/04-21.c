#include<stdio.h>
int main()
{
	int a;
	printf("\t欢迎使用数据类型长度查询工具\n\n");
	printf("\t[1] char\n");
	printf("\t[2] short\n");
	printf("\t[3] int\n");
	printf("\t[4] long\n");
	printf("\t[5] float\n");
	printf("\t[6] double\n");
	printf("\n\t请输入序号:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		printf("\n\tchar类型的长度为1个字节");
		break;
		case 2:
		printf("\n\tshort类型的长度为2个字节");
		break;
		case 3:
		printf("\n\tint类型的长度为4个字节");
		break;
		case 4:
		printf("\n\tlong类型的长度为4个字节");
		break;
		case 5:
		printf("\n\tfloat类型的长度为4个字节");
		break;
		case 6:
		printf("\n\tdouble类型的长度为8个字节");
		break;
		default:
			printf("\t输入有误!");
			break;
	}
	printf("\n\t");
	return 0;
}
