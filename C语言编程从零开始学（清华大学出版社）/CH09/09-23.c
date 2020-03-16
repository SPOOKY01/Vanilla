#include<stdio.h>
int main()
{
    char str1[] = "C Language", str2[15];
    int i;
    for(i=0;*(str1+i)!='\0';i++)
    {
        *(str2+i) = *(str1+i);
    }
    *(str2+i) = '\0';
    printf("字符串str1为:%s\n", str1);
    printf("复制后\n");
    printf("字符串str2为: ");
    for(i=0;str1[i];1='\0';i++)
    {
        printf("%c",str2[i]);
    }
    printf("\n");
    retun 0;
}
