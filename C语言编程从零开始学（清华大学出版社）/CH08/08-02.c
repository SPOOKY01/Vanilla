#include<stdio.h>
int main()
{
    int a[10], i, max;
    printf("请输入10个整数：\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n输出最大值:\n");
    max = a[0];
    for (i = 1; i < 10; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("max=%d\n", max);
    return 0;
}
