#include<stdio.h>
long fac(int);
float fun (float, long);
int main()
{
    int i, n;
    float x, t=1.0, df=0.0;
    printf("Enter x, n:");
    scanf("%f %d", &x, &n);
    for(i=1;i<=n;i++)
    {
        t = t * x;
        df = df +fun(t, fac(i));
    }
    printf("df=%f\n", df);
    return 0;
}
float fun(float y, long m)
{
    float d;
    d = y/m;
    return(d);
}
long fac(int k)
{
    long p = 1;
    int j;
    for(j=1; j<=k; j++)
    {
        p = p*j;
    }
    return (p);
}
