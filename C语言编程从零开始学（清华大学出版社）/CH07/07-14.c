#include<stdio.h>
void sum()
{
    int i;
    int sum = 0;
    for(i=1; i<=100; i++)
    {
        sum = sum + i;
    }
    printf("1+2+3+...+99+100=%d\n", sum);
}
int main()
{
    sum();
    return 0;
}
