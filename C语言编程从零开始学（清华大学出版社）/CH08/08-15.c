#include<stdio.h>//8-15
int main()
{
    char str1[] = "String!";
    char str2[] = "Str\0ing!";
    printf("字符串数组str1为: %s\n", str1);
    printf("字符串数组str2为: %s\n", str2);
    return 0;
}
