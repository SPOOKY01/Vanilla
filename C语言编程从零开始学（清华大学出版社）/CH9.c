#include<stdio.h>//9-2
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




#include<stdio.h>//9-3
int main()
{
    int a = 10, b = 9, temp;
    int *pa = &a, *pb = &b;
    printf("a = %d, b = %d\n", a, b);
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}




#include<stdio.h>//9-4
void fun(innt a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("交换后:a = %d, b = %d\n", a, b);
}
int main()
{
    int a = 50, b = 100;
    printf("交换前:a = %d, b = %d\n", a, b);
    fun(a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}




#include<stdio.h>//9-5
void fun(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("*p1 = %d， *p2 = %d\n", *p1, *p2);
}
int main()
{
    int a = 50,b = 100;
    printf("a = %d, b = %d\n", a, b);
    fun(&a, &b);
    return 0;
}




#include<stdio.h>//9-6
#include<string.h>
char *strlong(char *str1, char *str2)
{
    if(strlen(str1) >= strlen(str2))
    {
        return str1;
    }
    else
    {
        return str2;
    }
}
int main()
{
    char str1[30], str2[30], *str;
    gets(str1);
    gets(str2);
    str = strlong(str1, str2);
    printf("最长字符串是: %s\n", str);
    return 0;
}




#include<stdio.h>//9-7
int *fun(int *x, int *y)
{
    if(*x > *y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a,b;
    int *p;
    printf("请输入两个整数:\n");
    scanf("%d%d", &a, &b);
    p = fun(&a, &b);
    printf("指针变量指向最大值为: %d\n", *p);
    return 0;
}




#include<stdio.h>//9-8
int *fun(int x, int y)
{
    if(x>y)
    {
        return &x;
    }
    else
    {
        return &y;
    }
}
int main()
{
    int a,b;
    int *p;
    printf("请输入两个整数:\n");
    scanf("%d%d", &a, &b);
    p = fun(a,b);
    printf("指针变指向最大值为:%d\n", *p);
    return 0;
}




#include<stdio.h>//9-9
void fun(int x);
void (*fun)(int );
int main()
{
    fun(10);
    fun = &fun;
    (*fun)(20);
    return 0;
}
void fun(int x)
{
    printf("%d\n", x);
}




#include<stdio.h>//9-10
int main()
{
    int arr[5] = {99,37,100,82,252};
    int i;
    printf("数组arr中的元素为:\n");
    for(i = 0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}




#include<stdio.h>//9-11
int main()
{
    int arr[5] = {3,4,5,6,7};
    int i;
    printf("数组arr中的元素为:\n");
    for(i=0;i=5;i++)
    {
        printf("%d",*(arr+i));
    }
    printf("\n");
    return 0;
}




#include<stdio.h>//9-12
int main()
{
    int arr[5] = {1,2,3,4,5};
    int *p;
    printf("数组arr中的元素为:\n")；
    for(p=arr;p<(arr+5);p++)
    {
        printf("%d\t", *p);
    }
    printf("\n");
    return 0;
}




#include<stdio.h>//9-13
int main()
{
    int arr[5] = {100,26,83,49,52};
    int *p,i;
    p = arr;
    printf("数组arr中的元素为:\n");
    for(i = 0;i<5;i++,p++)
    {
        printf("%d\t", *p);
    }
    printf("\n");
    return 0;
}




#include<stdio.h>//9-14
void fun(int b[],int n)
{
    int temp,u,j,k;
    k = (n-1)/2;
    for(i = 0;i<=k;i++)
    {
        j = n-1-i;
        temp = b[i];
        b[i] = b[j];
        b[j] = temp;
    }
}
int main()
{
    int arr[5] = {99,37,100,82,252};
    int i;
    printf("数组arr为:\n");
    for(i = 0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    fun(arr,5);//调用函数
    printf("数组arr反转后为:\n")；
    for(i = 0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}




#include<stdio.h>//9-15
void fun(int *arr,int n)
{
    int temp k;
    int *i, *j, *p;
    j = arr+n-1;
    k = (n-1)/2;
    p = arr+k;
    for(i = arr;i<=p;i++,p--)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
}
int main()
{
    int arr{5} = {32,21,65,101,88};
    int i;
    printf("数组arr为:\n");
    for(i = 0;i<5;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    fun(arr,5);
    printf("将数组arr反转后:\n");
    for(i = 0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}




#include<stdio.h>//9-16
void fun(int b[], int n)
{
    int temp,i,j,k;
    k = (n-1)/2;
    for(i = 0;i<=k;i++)
    {
        
    }
}
