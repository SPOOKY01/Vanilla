#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "XxYyZz";
    printf("转换前字符串为: %s\n", str);
    printf("转换后字符串为: %s\n", strlwr(str));
    return 0;
}
