#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "aBcD";
    char str2[] = "ABCd";
    int x;
    x = strcmp(str1, str2);
    printf("函数返回值为: %d\n", x);
    return 0;
}
