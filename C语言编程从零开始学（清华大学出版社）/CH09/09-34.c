#include<stdio.h>
int main()
{
    int i;
    char *str[] = {"My","First","C","Language"};
    char **p;
    for(i=0;i<4;i++)
    {
        p = str+i;
        printf("地址: %X 指针数str[%d]: %s\n", *p, i, *p);
    }
    return 0;
}
