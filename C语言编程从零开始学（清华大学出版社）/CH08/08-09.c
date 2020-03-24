#include<stdio.h>
int main()
{
    int arr1[3][4], arr2[3][4], arr3[3][4], i, j;
    printf("arr3 = arr1 + arr2\n");
    printf("\n");
    printf("请输入数组 arr1 的元素值\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf(" %d", &arr1[i][j]);
        }
    }
    printf("请输入数组 arr2 的元素值\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf(" %d", &arr2[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("arr1 数组为: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", arr1[i][j]);
        }
        printf("\n");
    }
    printf("arr2 数组为: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", arr2[i][j]);
        }
        printf("\n");
    }
    printf("arr3 数组为: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
