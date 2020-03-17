#include<stdio.h>
int main()
{
    float x, y;
    printf("请输入x:");
    scanf("%f", &x);
    if(x>=0)
    {
        if(x>0)
        {
            y = 1;
        }
        else
        {
            y = 0;
        }
    }
    else
    {
        y = -1;
    }
    printf("y=%-4.0f\n",y);
    return 0;
}
