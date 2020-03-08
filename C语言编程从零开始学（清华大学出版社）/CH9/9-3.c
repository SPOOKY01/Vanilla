#include<stdio.h>
int main()
{
    int a = 10, b = 9, temp;
    int *pa = &a, *pb = &b;
    printf("a = %d, b = %d\n", a, b);
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
