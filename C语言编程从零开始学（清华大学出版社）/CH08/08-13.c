#include<stdio.h>
void fun(int a[], int n)
{
    int i;
    printf("\n数组的值为:\n");
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            a[i] = 0;
        }
        printf("%d ", a[i]);
    }
}
int main()
{
    int b[5], i;
    printf("输入数组:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\n初始的数组数据类型:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    fun(b, 5);
    printf("\n数组数据类型最后的数值:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
