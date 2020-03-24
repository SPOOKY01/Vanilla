#include<stdio.h>
int main()
{
    char a[20];
    int i;
    printf("使用scanf()函数输入字符数组a[20]: ");
    for (i = 0; i < 20; i++)
    {
        scanf("%c", &a[i]);
        if (a[i] == '\n')
        {
            a[i] = '\0';
            break;
        }
    }
    printf("\n");
    printf("使用printf()函数输出字符数组a[20]： ");
    for (i = 0; a[i] != '\n'; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}
