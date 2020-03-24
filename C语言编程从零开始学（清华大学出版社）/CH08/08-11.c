#include<stdio.h>//8-11
void fun(int a)
{
    if (a > 0)
    {
        printf("%d ", a);
    }
    else
    {
        printf("%d ", 0);
    }
}
int main()
{
    char str[5], i;
    printf("请输入五个字符ASCII码:");
    for (i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]);
        fun(str[i]);
    }
    printf("\n");
    return 0;
}
