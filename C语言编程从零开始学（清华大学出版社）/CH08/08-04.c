#include<stdio.h>
int main()
{
    int a[10], i, sum = 0;
    float b;
    printf("请输入10个整数:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    printf("数组和sum=%d\n", sum);
    b = (float)sum / 10;
    printf("求平均值b=%5.2f\n", b);
    return 0;
}
