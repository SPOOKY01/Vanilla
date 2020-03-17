#include<stdio.h>
int fn(int a);
void main()
{
    int sum;
    sum = fn(10);
    printf("sum=%d\n", sum);
}
int fn(int a)
{
    if(a<=2 && a>0)
    {
        return 1;
    }
    else if(a>2)
    {
        a = fn(a-1) + fn(a-2);
        return a;
    }
}
