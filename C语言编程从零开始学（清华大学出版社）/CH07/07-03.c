#include<stdio.h>
int max(int a, int b);
int main()
{
    int x, y, z;
    printf("请输入两个数:");
    scanf("%d %d", &x, &y);
    z = max(x, y);
    printf("max: %d\n", z);
    return 0;
}
int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
