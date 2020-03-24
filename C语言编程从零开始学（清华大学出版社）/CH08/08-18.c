#include<stdio.h>
int main()
{
    char a[20];
    int i = 0;
    printf("输入:");
    while ((a[i++] = getchar()) != '\n');
    putchar('\n');
    a[--i] = '\0';
    i = 0;
    printf("输出:");
    while (putchar(a[i++]) != '\0');
    putchar("\n");
    return 0;
}
