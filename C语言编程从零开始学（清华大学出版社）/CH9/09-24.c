#include<stdio.h>
int main()
{
    char str1[] = "C Language", str2[10];
    char *p1,*p2;
    int i;
    p1 = str1;
    p2 = str2;
    for(;*p1!='\0';p1++,p2++)
    {
        *p1 = *p2;
    }
    *p2 = '\0';
    printf("字符串str1为:%s\n", str1);
    printf("str1复制到str\n");
    printf("字符串str2为: ");
    for(i=0;str2[i]!='\0';i++)
    {
        printf("%c", str2[i]);
    }
    printf("\n");
    return 0;
}
