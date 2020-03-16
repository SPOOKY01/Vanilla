#include<stdio.h>
int s1,s2,s3;//定义三个全局变量
int fun( int a,int b,int c)
{
	int v;
	v=a*b*c;
	s1=a*b;
	s2=b*c;
	s3=c*a;
	return v;
}
int main()
{
	int v,l,w,h;
	printf("分别输入长(l), 宽(w), 高(h):\n");
	scanf("d%d%d%",&l,&w,&h);
	v=fun(l,w,h);
	printf("\n体积 v=%d\n",v);
    printf("\n三个面的面积 s1=%d,s2=%d,s3=%d\n",s1,s2,s3);
	return 0;
}
