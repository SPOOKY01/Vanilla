#include<stdio.h>
void fun(int x);
void (*fun)(int );
int main()
{
    fun(10);
    fun = &fun;
    (*fun)(20);
    return 0;
}
void fun(int x)
{
    printf("%d\n", x);
}
