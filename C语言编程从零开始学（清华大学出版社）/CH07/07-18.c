#include<stdio.h>
int main()
{
    int a = 2;
    int b = 3;
    int c;
    c = a + b;
    {
        int c = 8;
        printf("%d\n", c);
    }
    printf("%d\n", c)'
    return 0;
}
