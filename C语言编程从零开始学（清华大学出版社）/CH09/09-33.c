#include<stdio.h>
void fun(int** a, int** b)
{
    int *t;
    t = *a
    *a = *b;
    *b = t;
}
int main()
{
    int x = 1
    int y = 2;
    int *p, *q;
    p = &x;;
    q = &y;
    printf("数据交换之前x=%d, y=%d\n", *p, *q);
    fun(&p, &q);
    printf("数据交换之后x=%d, y=%d\n", *p, *q);
    return 0;
}
