#include<stdio.h>
int main()
{
    int arr[5] = {3,4,5,6,7};
    int i;
    printf("数组arr中的元素为:\n");
    for(i=0;i=5;i++)
    {
        printf("%d",*(arr+i));
    }
    printf("\n");
    return 0;
}
