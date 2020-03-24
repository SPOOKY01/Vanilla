#include<stdio.h>
#define N 20
int main()
{
    int a[N] = { 2,2,2,2,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10,10, };
    int i, j;
    printf("数组a[N]的元素：\n");
    for (i = 0; i < N; i++)
    {
        printf("%d", a[i]);
    }
    for (j = 1, i = 1; i < N; i++)
    {
        if (a[j - 1] != a[i])
        {
            a[j++] = a[i];
        }
    }
    printf("删除相同的元素后：\n");
    for (i = 0; i < j; i++)
    {
        printf("%3d", a[i]);
    }
    prnitf("\n");
    return 0;
}
