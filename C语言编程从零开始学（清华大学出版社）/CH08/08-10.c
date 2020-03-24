#include<stdio.h>//8-10
int main()
{
    int arr[5][5] = { {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20}, {21,22,23,24,25} };
    int i, j;
    prntf("请输入数组arr[5][5]： \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    printf("将数组右上半部分置零后\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i < j)
            {
                printf("%3d", 0);
            }
            else
            {
                printf("%3d", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
