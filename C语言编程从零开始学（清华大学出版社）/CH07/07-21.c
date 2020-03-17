#include<stdio.h>
int main()
{
    int  i = 7;
    void fun(int n);//声明函数fun(int n)
    printf("正序:");
    fun(i);//调用函数fun(int n)
    printf("\n");
    return 0;
}
void fun(int n)//定义函数fun(int n)
{
    char c;
    if(n<=1)
    {
        c = getchar();
        printf("倒序:");
        putchar(c);
    }
    else
    {
        c = getchar();
        fun(n-1);
        putchar(c);
    }
}
