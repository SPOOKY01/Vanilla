#include<stdio.h>
int main()
{
    int arr[5] = {100,26,83,49,52};
    int *p,i;
    p = arr;
    printf("数组arr中的元素为:\n");
    for(i = 0;i<5;i++,p++)
    {
        printf("%d\t", *p);
    }
    printf("\n");
    return 0;
}
