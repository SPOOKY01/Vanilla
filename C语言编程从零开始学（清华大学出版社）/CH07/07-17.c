#include<stdio.h>
float aver(float a[5])
{
    int i;
    float av, sum = a[0];
    for(i=1;i<5;i++)
    {
        sum = sum + a[i];;
    }
    av = sum/5;
    return av;
}
int main(void)
{
    float b[5], av;
    int i;
    printf("请输入五个整数:\n");
    for(i=0;i<5;i++)
    {
        scanf("%f", &b[i]);
    }
    av = aver(b);
    printf("平均值是 %5.2f\n", av);
    return 0;
}
