#include<stdio.h>
int main()
{
    int i,j,sum;
    j = 0;
    sum = 0;
    for(i = 0;i<10;i++)
    {
        scanf("%d", &j);
        if(j<0)
        {
            continue;
            {
            sum = sum + j;
            }
        }
    }
    printf("sum=%d\n",sum);
    return 0;
}
