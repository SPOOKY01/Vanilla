#include<stdio.h>
void fun(int *arr,int n)
{
    int temp k;
    int *i, *j, *p;
    j = arr+n-1;
    k = (n-1)/2;
    p = arr+k;
    for(i = arr;i<=p;i++,p--)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
}
int main()
{
    int arr{5} = {32,21,65,101,88};
    int i;
    printf("数组arr为:\n");
    for(i = 0;i<5;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    fun(arr,5);
    printf("将数组arr反转后:\n");
    for(i = 0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}
