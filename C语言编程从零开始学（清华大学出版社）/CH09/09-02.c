#include<stdio.h>
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
