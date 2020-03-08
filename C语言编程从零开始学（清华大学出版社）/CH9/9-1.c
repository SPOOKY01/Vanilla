#include<stdio.h>
int main()
{
    int a, *p;
    p = &a;
    a = 10;
    printf("a:%d\n",a);
    printf("*p:%d\n",*p);
    printf("&a:%x\n",&a);
    printf("p:%x\n",p);
    printf("&p:%x\n",&p);
    return 0;
}
