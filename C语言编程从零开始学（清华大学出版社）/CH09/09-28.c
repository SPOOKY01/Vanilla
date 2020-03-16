#include<stdio.h>
int main()
{
    char *p[4] = {"My","first","C","Program"};
    int i;
    for(i=0;i<4;i++)
    {
        printf("p[%d] = %s\n",i,p[i]);
    }
    printf("\n")
    return 0;
}
