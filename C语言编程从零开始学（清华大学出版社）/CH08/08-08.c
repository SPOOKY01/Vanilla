#include<stdio.h>//8-8
int main()
{
    int arr[3][3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int i, j, k;
    printf("请输入一个3*3*3的三维数组arr:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%5d", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
