#include<stdio.h>
int main()
{
    int a[2][3];
    int b[3][2];
    int i, j;
    printf("2*3的二维数组 a:\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%3d", &a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    printf("3*2的二维数组 b:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
