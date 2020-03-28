#include<stdio.h>
enum workday//定义枚举类型，同时声明该类型的三个变量，并且赋初值，他们都是全局变量。
{
    MON = 1,TUE,WED,THU,FRI,SAT,SUN
}
yesterday=MON, today=Tue, tomorrrow=WED;
int main()
{
    printf("yesterday:%d today:%d tomorrow:%d \n", yesterdy, today, tomorrow);
    return 0;
}
