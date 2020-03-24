#include<stdio.h>
int main()
{
    int a[5][5], trans[5][5], b[5][2], c[5][2], sum = 0, i, j;
    printf("输入矩阵:\n");
    for (i = 0; i < 5; i++)//初始数组a[5][5]的录入
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 5; i++)//数组的转置
    {
        for (j = 0; j < 5; j++)
        {
            trans[j][i] = a[i][j];
        }
    }
    printf("矩阵转置以后:\n");
    for (i = 0; i < 5; i++)//转置后矩阵的输出
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 5; i++)//主对角线上元素之和
    {
        sum = sum + a[i][i];
    }
    printf("矩阵的主对角线上的数字之和为:%d\n", sum);
    printf("\n");
    printf("打印输出矩阵啊左下半的三角如下:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("输入新的数组b[5][2]: \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
            c[i][j] = 0;
        }
    }
    for (i = 0; i < 5; i++)//矩阵相乘
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
        }
    }
    printf("输出新的数组c[5][2]: \n");
    for (i = 0; i < 5; i++)//输出相乘后的矩阵
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
