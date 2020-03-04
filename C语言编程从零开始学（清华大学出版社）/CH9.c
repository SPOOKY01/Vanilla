#include<stdio.h>//9-1
int main()
{
    int a,*p;
    p = &a;
    a = 10;
    printf("a:%d\n",a);
    printf("*p:%d\n",*p);
    printf("&a:%x\n",&a);
    printf("p:%x\n",p);
    printf("&p:%x\n",&p);
    return 0;
}




#include<stdio.h>//9-2
int main()
{
    int a = 33, b = 22, c = 55;
    int *p = &a;
    *p = b;
    c = *p;
    printf("输出修改后的值:\n");
    printf("a = %d,b = %d,c = %d,*p = %d\n", a, b, c, *p);
    return 0;
}




#include<stdio.h>//9-3
int main()
{
    int a = 10, b = 9, temp;
    int *pa = &a, *pb = &b;
    printf("a = %d, b = %d\n", a, b);
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}




#include<stdio.h>//9-4
void fun(innt a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("交换后:a = %d, b = %d\n", a, b);
}
int main()
{
    int a = 50, b = 100;
    printf("交换前:a = %d, b = %d\n", a, b);
    fun(a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}




#include<stdio.h>//9-5
void fun(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("*p1 = %d， *p2 = %d\n", *p1, *p2);
}
int main()
{
    int a = 50,b = 100;
    printf("a = %d, b = %d\n", a, b);
    fun(&a, &b);
    return 0;
}




#include<stdio.h>//9-6
#include<string.h>
char *strlong(char *str1, char *str2)
{
    if(strlen(str1) >= strlen(str2))
    {
        return str1;
    }
    else
    {
        return str2;
    }
}
int main()
{
    
}
