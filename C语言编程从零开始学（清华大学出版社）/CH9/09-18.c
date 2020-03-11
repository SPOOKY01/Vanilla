#include<stdio.h>
int main()
{
    int i, j;
    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    printf("请输入二维数组arr[3][4]的元素:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
    printf("%d,%d\n",a,*a);
    printf("%d,%d\n",a[0],*(a=0));
    printf("%d,%d\n",&a[0],&a[0][0]);
    printf("%d,%d\n",a[1],a+1);
    printf("%d,%d\n",&a[1][0],*(a=1)+0);
    printf("%d,%d\n",a[2],*(a+2));
    printf("%d,%d\n",&a[2],a+2);
    printf("%d,%d\n",a[1][0],*(*(a+1)+0));
    return 0;
}
