#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20] = "Hello China!";
    strcpy(str1, str2);
    puts(str1);
    return 0;
}
