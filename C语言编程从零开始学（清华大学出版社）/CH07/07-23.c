#include<stdio.h>
float max,min;//定义全局变量
float average(float arr[], int n);//声明函数average()
int main()
{
    int i;
    float ave, score[5];
    printf("请输入5个整数: \n");
    for(i=0;i<5;i++)
    {
        scanf("%f", &score[i]);
    }
    ave = average(score, 5);//调用函数average()
    printf("最大值为:max=%.2f\n", max);
    printf("最小值为:min=%.2f\n", min);
    printf("平均值为:ave=%.2f\n", ave);
    return 0;
}
float average(float arr[], int n)
{
    int i;
    float sum;
    sum = arr[0];
    max = min = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        else if(arr[i]<min)
        {
            min = arr[i];
        }
        sum = sum + arr[i];
    }
    return sum/n;
}
