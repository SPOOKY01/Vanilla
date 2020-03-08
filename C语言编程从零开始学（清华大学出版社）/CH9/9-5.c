#include<stdio.h>
void fun(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("*p1 = %d， *p2 = %d\n", *p1, *p2);
}
int main()
{
    int a = 50,b = 100;
    printf("a = %d, b = %d\n", a, b);
    fun(&a, &b);
    return 0;
}
