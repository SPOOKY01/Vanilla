#include<stdio.h>
int *fun(int *x, int *y)
{
    if(*x > *y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a,b;
    int *p;
    printf("请输入两个整数:\n");
    scanf("%d%d", &a, &b);
    p = fun(&a, &b);
    printf("指针变量指向最大值为: %d\n", *p);
    return 0;
}
