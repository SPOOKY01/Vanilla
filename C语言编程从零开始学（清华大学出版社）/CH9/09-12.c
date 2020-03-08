#include<stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    int *p;
    printf("数组arr中的元素为:\n")；
    for(p=arr;p<(arr+5);p++)
    {
        printf("%d\t", *p);
    }
    printf("\n");
    return 0;
}
