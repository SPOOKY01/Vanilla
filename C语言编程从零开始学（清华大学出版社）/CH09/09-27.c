#include<stdio.h>
void fun1(char *y,char *z);
void fun2(char *x,char *z);
int main()
{
    char a1[5];
    char a2[5];
    char a3[11];
    printf("字符串 a1:");
    gets(a1);
    printf("字符串 a2:");
    gets(a2);
    char *p1,*p2,*p;
    p1 = a1;
    p2 = a2;
    p = a3;
    fun1(p2,p);
    fun2(p1,p);
    printf("字符串 a3:");
    puts(a3);
    return 0;
}
void fun1(char *y, char *z)
{
    for(;*y='\0';y++,z++)
    {
        *z = *y;
    }
    *z = ' ';
}
void fun(char *x,char *z)
{
    z+=5;
    for(;*x!='\0';x++,z++)
    {
        *z = *x;
    }
    *z = '\0';
}
