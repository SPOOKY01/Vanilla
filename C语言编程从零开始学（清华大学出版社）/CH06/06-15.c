#include<stdio.h>
int main()
{
    float a, b, c;
    printf("请输入三角形的三条边a,b,c:");
    scanf("%d %d %d",&a, &b, &c);
    if(a+b<=c || a+c<=b || b+c<=a)
    {
        printf("不构成三角形\n");
    }
	else if(a==b && c==a && b==c)
    {
        printf("等边三角形\n");
    }
    else if(a==b || a==c || b==c)
    {
        printf("等腰三角形\n");
    }
	else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
	{
		printf("直角三角形\n");
	}
   	else
	{
		printf("一般三角形\n");
	}
    return 0;
}
