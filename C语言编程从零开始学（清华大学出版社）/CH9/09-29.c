#include<stdio.h>
int main()
{
    char arr1[2][3] = {'A','B','C','D','E','F'},p[2];
    char i,j;
    printf("输出数组arr1:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%c",arr1[i][j]);
        }
        printf("\n");
    }
    p[0] = arr1[0];
    p[1] = arr1[1];
    printf("\n");
    printf("输出数组arr2: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++,p[i]++)
        {
            printf("arr2[%d][%d]=*(p[%d]+%d):%c\n",i,j,i,j,*p[i]);
        }
    }
    return 0;
}
