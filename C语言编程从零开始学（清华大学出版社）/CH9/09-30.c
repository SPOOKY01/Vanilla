#include<stdio.h>
#include<string.h>
void fun(char *a1[],int m);
int main()
{
    char *a[] = {"A","B","C","D","E"};
    int i,j;
    j = 5;
    printf("排序前的指针数组a[]为;\n");
    for(i=0;i<j;i++)
    {
        printf("%s ",a[i]);
    }
    prinf("\n");
    fun(a,j);
    printf("排序后的指针数组a为:\n");
    for(i=0;i<j;i++)
    {
        printf("%s ",a[i]);
    }
    printf("\n");
    return 0;
}
void fun(char *a1[],int m)
{
    char *t;
    int i,j,k,n;
    n = m-1;
    for(i=0;i<n;i++)
    {
        k = i;
        for(j=i+1;i<m;j++)
        {
            if(strcmp(a1[k],a1[j])<0)
            {
                k = j;
            }
            if(k!=i)
            {
                t = a1[i]
                a1[i] = a1[k];
                a1[k] = t;
            }
        }
    }
}
