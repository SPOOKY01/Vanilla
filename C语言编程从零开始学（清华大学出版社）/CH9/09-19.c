#include<stdio.h>
int main()
{
    int i;
    int a[3][4] = {{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    int *p;
    for(p=a[0];p<a[0]+12;p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    return 0;
}
