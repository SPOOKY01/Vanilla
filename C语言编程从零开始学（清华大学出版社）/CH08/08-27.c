#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20], str3[20];
    int x, a1, a2, a3;
    printf("请输入两个字符串常量: \n");
    printf("\n");
    scanf("%s %s", &str1, &str2);
    x = strcmp(str1, str2);
    if (x != 0)
    {
        printf("两个字符串常量不相等\n");
        strcat(str1, str2);
    }
    else
    {
        printf("两个字符串常量相等\n");
    }
    strcpy(str3, str1);
    a1 = strlen(str1);
    a2 = strlen(str2);
    a3 = strlen(str3);
    printf("str1=%s\t长度=%d\n", str1, a1);
    printf("str2=%s\t长度=%d\n", str2, a2);
    printf("str3=%s\t长度=%d\n", str3, a3);
    return 0;
}
