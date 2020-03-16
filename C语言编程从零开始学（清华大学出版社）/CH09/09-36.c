#include<stdio.h>
int *fun(int *p1, int *p2, int an, int bn)
{
    int *c1, *c2;
    c1 = p1;
    c2 = p2;
    while(c1<p1+an && c2<p2+bn)
    {
        if(*c1<*c2)
        {
            c1++;
        }
        else if(*c1>*c2)
        {
            c2++;
        }
        else
        {
            retur c1;
        }
    }
    return 0;
}
int main()
{
    int *p, i;
    int str1[] = {6,3,5,7,9,13,15,27,29,37};
    int str2[] = {2,4,6,8,10,11,14,27,29,37};
    puts("数组数据类型的元素atr1[]:");
    for(i=0;i<sizeof(str1)/sizeof(str1[0]);i++)
    {
        printf(" %d",str1[i]);
    }
    puts("\n数组数据类型的元素str2:");
    for(i=0;i<sizeof(str2)/sizeof(str2[0]);i++)
    {
        printf(" %d", str2[i]);
    }
    p = fun(str1, str2, sizeof(str1)/sizeof(str1[0], sizeof(str2)/sizeof(str2[0])));
    if(p)
    {
        printf("\n第一个数组数据类形是相同的数量 %d\n", *p);
    }
    else
    {
        printf("未找到!\n");
    }
    return 0;
}
