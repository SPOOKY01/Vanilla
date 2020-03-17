#include<stdio.h>
int main()
{
    int n = 0;
    printf("请输入字符串:");
    while(getchar() != '\n')
    {
        n++;
    }
    printf("字符个数n=%d\n", n);
    return 0;
}
