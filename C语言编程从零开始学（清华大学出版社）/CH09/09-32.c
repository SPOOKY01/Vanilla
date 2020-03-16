#include<stdio.h>
void fun(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 1;
    int y = 2;
    int *p, *q;
    p = &x;
    q = &y;
    printf("x=%d, y=%d\n", x, y);
    fun(p, q);
    printf("x=%d, y=%d\n", x, y);
    return 0;
}
