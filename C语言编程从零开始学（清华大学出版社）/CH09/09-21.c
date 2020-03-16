#include<stdio.h>
void fun(int(*p)[3],int n)
{
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[2][3] = {{1,2,3},{4,5,6}};
    fun(a,2);
    return 0;
}
