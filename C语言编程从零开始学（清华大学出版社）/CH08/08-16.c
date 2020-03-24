#include<stdio.h>
int main()
{
    int i;
    char str1[] = "Hello!";
    char str2[6] = { 'C','h','i','n','a','\0' };
    for (i = 0; i < 6; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");
    printf("%s,str2");
    printf("\n");
    printf("数组char str1[ ]有 %d 个字符\n", sizeof(str1));
    printf("数组char str2[6]有 %d 个字符\n", sizeof(str2));
    return 0;
}
