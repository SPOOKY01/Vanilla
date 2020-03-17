#include<stdio.h>
int min(int x, int y)
{
    if(x>y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
int main()
{
    int a, b, c;
    printf("请输入两个整数: \n");
    scanf("%d%d", &a, &b);
    c = min(a,b);
    printf("两数字之中最小值是: %d\n", c);
    return 0;
}
