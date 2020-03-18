#include<stdio.h>
int fun(int n, int i, int j, int k)
{
    printf("请输入: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            k = i*j;
            printf("%d*%d=%2d  ", j, i, k);
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int  a = 0,b = 0,c = 0,d = 0,t;
    t = fun(a,b,c,d);
    return 0;
}
