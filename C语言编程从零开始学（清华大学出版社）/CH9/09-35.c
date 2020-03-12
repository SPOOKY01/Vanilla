#include<stdio.h>
#define N sizeof a/sizeof a[0]
int main()
{
    char j, *p;
    char a[] = {'A','B','C','D','E'}；
    printf("数组名称和下标遍历数组\n");
    for(j=0;j<N;j++)
    {
        printf("a[%d]\t = %c,\t", j, a[j]);
    }
    printf("\n");
    printf("指针便利数组\n");
    for(p=a;p<a+N;p++)
    {
        printf("*p\t = %c\t", *p);
    }
    printf("\n")
    printf("指针与字符变量结合遍历数组\n");
    for(p=a,j=0;p+j<a+N;j++)
    {
        printf("*(p+%d)\t = %c\t", j, *(p+j));
    }
    printf("\n");
    printf("指针与下标变量结合遍历数\n");
    for(p=a+N-1, j=N-1; j>=0; j--)
    {
        printf("p[-%d]\t = %c\t", j, p[-j]);
    }
    printf("\n");
    return 0;
}
