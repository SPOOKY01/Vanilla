#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20] = { "My first" };
    char str2[] = { " C program! " };
    strcat(str1, str2);
    puts(str1);
    return 0;
}
