#include<stdio.h>
int main()
{
    char atr[] = "C Language";
    printf("%s\n",str);
    return 0;
}




#include<stdio.h>
#include<string.h>
int main()
{
    char *str="C Language";
    int len = strlen(str), i;
    printf("%s\n", str);
    for(i=0;i<len;i++)
    {
        printf("%c", *(str+i));
    }
    printf("\n");
    for(i=0;i<len;i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
