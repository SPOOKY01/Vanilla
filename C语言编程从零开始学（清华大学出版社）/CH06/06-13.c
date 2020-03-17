#include<stdio.h>
int main()
{
    int i,s;
    s = 0;
    for(i=1;;i++)
    {
        s = s + i;
        if(s>5000)
        {
            break;
        }
    }
    printf("s = %d, i = %d\n", s, i);
    return 0;
}
