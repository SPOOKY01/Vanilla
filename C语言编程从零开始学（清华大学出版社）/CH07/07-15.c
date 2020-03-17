#include<stdio.h>
int max()
{
    int x,y;
    printf("请输入两个整数:\n");
    scanf("%d%d", &x, &y);
    return x>y?x:y;
}
int main()
{
    int m;
    m = max();
    printf("两数字之中较大的数为:  %d\n", m);
    return 0;
}
