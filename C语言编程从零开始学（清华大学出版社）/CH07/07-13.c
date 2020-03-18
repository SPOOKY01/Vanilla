#include<stdio.h>
void fun(int b[], int n)
{
    int  i,j,k,temp;
    for(i=1;i<=n-1;i++)
    {
        k = 0;
        for(j=1;j<n-1;j++)
        {
            if(b[k] < b[j])
            {
                k = j;
            }
            temp = b[k];
            b[k] = b[n-i];
            b[n-i] = temp;
        }
    }
    printf("形式参数b的值:%#x,地址: %#x\n", b, &b);
}
int main()
{
      int a[5] = {3,5,4,1,2};
      int i;
      printf("排序前的数组数据类型为:\n");
      printf("实参a的数值: %#x, 地址: %#x", a, &a);
      for(i=0;i<5;i++)
      {
          printf("%d ", a[i]);
      }
      printf("\n");
      printf("排序后的数组数据类型为: \n");
      fun(a, 5);
      for(i=0;i<5;i++)
      {
          printf("%d ", a[i]);
      }
      printf("\n");
      return 0;
}
