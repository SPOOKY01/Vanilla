#include<stdio.h>
#include<string.h>
union data
{
    int i;
    float f;
    char str[20];
};
int main()
{
    union data a;
    a.i = 40;
    printf("a.i: %d\n", a.i);
    a.f = 1.2;
    printf("a.f: %.2f\n", a.f);
    strcpy(a.str, "Hello!");
    printf("a.str: %s\n", a.str);
    return 0;
}
