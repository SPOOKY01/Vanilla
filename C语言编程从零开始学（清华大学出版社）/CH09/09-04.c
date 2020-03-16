#include<stdio.h>
void fun(innt a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("交换后:a = %d, b = %d\n", a, b);
}
int main()
{
    int a = 50, b = 100;
    printf("交换前:a = %d, b = %d\n", a, b);
    fun(a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
