#include<stdio.h>
#define N 9
int main()
{
    int i,a[N];
    for(i=0;i<=N;i++)
    {
        a[i] = i;
    }
    for(i=N;i>0;i--)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
