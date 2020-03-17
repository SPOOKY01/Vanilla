#include<stdio.h>
int main()
{
    float n=1,m=1,sum=0;
    printf("计算::1-1/2+1/3-1/4+...-1/98+1/99-1/100的数值\n");
    do
    {
        sum = sum+n/m;
        n = -n;
        m = m + 1;
    }
    while(m<=100);
    printf("sun=%f\n",sum);
    return 0;
}
