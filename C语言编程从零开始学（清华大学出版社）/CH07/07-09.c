#include<stdio.h>
void fun(int n)
{
    printf("Hello C!\n");
    if(n>0)
    {
        fun(--n);
    }
}
int main()
{
    fun(5);
    return 0;
}
