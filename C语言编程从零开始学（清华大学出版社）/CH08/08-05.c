#include<stdio.h>
int main()
{
    int i, j, a[3][3];
    printf("请输入一个3*3的二维数组a:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
