#include<stdio.h>
int n = 20;//n为全局变量
void fun1();
void fun2(int n);
void fun3();
int main()
{
    int n = 40;//这里的n是局部变量
    fun1();
    fun2(n);
    fun3();
    //代码块由{}包围
    {
        int n = 60;//这里的n是局部变量
        printf("语句块 n: %d\n", n);
    }
    printf("main()函数 n: %d\n", n);
    return 0;
}
void fun1()
{
    int n = 80;
    printf("fun1()函数 n: %d\n", n);
}
void fun2(int n)
{
    printf("fun2()函数 n: %d\n", n);
}
void fun3()
{
    printf("fun3()函数 n: %d\n", n);
}
