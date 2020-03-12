#include<stdio.h>
void fun(char p2[],char p1[])
{
    int i;
    for(i=0;p1[i]!='\0';i++)
    {
        p2[i]=p1[i];
    }
    p2[i] = '\0';
}
int main()
{
    char a1[5]="abc";
    char a2[15]="ABCDE";
    printf("输入字符串 a1=%s\n", a1);
    printf("输入字符串 a2=%s\n", a2);
    fun(a2, a1);
    printf("复制后\n");
    printf("字符串 a1=%s\n", a1);
    printf("字符串 a2=%s\n", a2);
    return 0;
}
