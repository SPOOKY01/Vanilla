#include<stdio.h>
float fun(float arr[], int n)
{
    int i;
    float aver, sum = arr[0];
    for (i = 1; i < n; i++)
    {
        sum = sum + arr[i];
    }
    aver = sum / n;
    return aver;
}
int main()
{
    int i;
    float a[5] = { 88,98,97.5,84.5,86 };
    float b[7] = { 78.5,98,97.5,84.5,86,77,94.5 };
    for (i = 0; i < 5; i++)
    {
        printf("%.2f", a[i]);
    }
    printf("\n第一组数据为: %6.2f\n", fun(a, 5));
    printf("\n");
    for (i = 0; i < 7; i++)
    {
        printf("%.2f ", b[i]);
    }
    printf("\n第二组数为: %6.2f\n", fun(b, 7));
    return 0;
}
