#include<stdio.h>
float fun(int x)
{
    int i;
    float t = 1;
    for(i=1; i<=x; i++)
    {
        t = t*i;
    }
    return(t);
}
int main()
{
    float c;
    int m, n;
    float fun(int x);
    printf("请输入 m, n:");
    scanf("%d%d",&m, &n);
    c = fun(m)/(fun(n)*fun(m-n));
    printf("c=%8.1f\n", c);
    return 0;
}
