#include<stdio.h>
int main()
{
    char c;
    printf("请输入一个字符: ");
    c = getchar();
    if(c<32)
    {
        printf("这是一个控制字符\n");
    }
    else if(c>='0' && c<='9')
    {
        printf("这是一个数字\n");
    }
    else if(c>='A' && c<='Z')
    {
        printf("这是大写字母\n");
    }
    else if(c>='a' && c<='z')
    {
        printf("这是小写字母\n");
    }
    else
    {
        printf("这是其他符号\n");
    }
    return 0;
}
