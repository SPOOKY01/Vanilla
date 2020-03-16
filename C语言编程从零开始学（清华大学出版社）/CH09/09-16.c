#include<stdio.h>
void fun(int b[], int n)
{
    int temp,i,j,k;
    k = (n-1)/2;
    for(i = 0;i<=k;i++)
    {
        j = n-1-i;
        temp = b[i];
        b[i] = b[j];
        b[j] = temp;
    }
}
int main()
{
    int arr[5] = {5, 8, 7, 4, 2};
    int *p;
    p = arr;
    printf("数组arr为:\n");
    for(p = arr; p < arr+5;p++)
    {
        printf("%d\t",*p);
    }
    printf("\n");
    p =arr;
    fun(p, 5);
    printf("讲数组数据类型arr进行反转以后:\n");
    for(p = arr;p < arr+5;p++)
    {
        printf("%d\t", *p);
    }
    printf("\n");
    return 0;
}
