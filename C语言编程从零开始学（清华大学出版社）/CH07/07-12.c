#include<stdio.h>
void fun(int a, int b);
int main()
{
    int a = 7;
    int b = 2;
    printf("参数交换之前 a = %d, b = %d\n", a, b);
    fun(a, b);
    return (0);//
}
void fun(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf("参数交换之后 a = %d, b = %d\n", a, b);
}
