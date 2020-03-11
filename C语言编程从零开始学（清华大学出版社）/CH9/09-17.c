#include<stdio.h>
void fun(int *arr, int n)
{
    int temp, k;
    int *i, *j, *p;
    j = arr+n-1;
    k = (n-1)/2;
    p = arr+k;
    for(i = arr; i<=p; i++,j--)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
}
int main()
{
    int arr[5] = {59,80,17,14,25};
    int *p;
    p = arr;
    printf("数组arr[5]为:\n");
    for(p = arr;p<arr+5;p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    p = arr;
    fun(p, 5);
    printf("将数组数据类型arr[5]返转后得到:\n");
    for(p=arr;p<arr+5;p++)
    {
        printf("%d ", *p);
    }
    printf("\n");
    return 0;
}
