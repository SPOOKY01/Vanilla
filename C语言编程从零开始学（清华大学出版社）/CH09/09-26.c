#include<stdio.h>
void fun(char *p1,char *p2)
{
    for(;*p1!='\0';p1++,p2++)
    {
        *p1=*p2;
    }
    *p1 = '\0';
}
int main()
{
    char a1[10]="abc";
    char a2[10]="ABCDE";
    printf("输入字符串 a1=%s\n", a1);
    printf("输入字符串 a2=%s\n", a2);
    fun(a1, a2);
    printf("复制后\n");
    printf("字符串 a1=%s\n", a1);
    printf("字符串 a2=%s\n", a2);
    return 0;
}
