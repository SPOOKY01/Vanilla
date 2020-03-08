#include<stdio.h>
void fun(int b[],int n)
{
    int temp,u,j,k;
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
    int arr[5] = {99,37,100,82,252};
    int i;
    printf("数组arr为:\n");
    for(i = 0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    fun(arr,5);//调用函数
    printf("数组arr反转后为:\n")；
    for(i = 0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}
