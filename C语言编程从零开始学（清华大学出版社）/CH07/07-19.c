#include<stdio.h>
int a = 4;//a为全局变量
int b = 6;//b为全局变量
int max(int a, int b)
{
    int c;
    c = a>b?a:b;
    return c;
}
int main()
{
    int a = 8;
    printf("%d\n", max(a,b));
    return 0;
}
