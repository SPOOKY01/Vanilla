#include<stdio.h>
union data
{
    int x;
    char y;
    float z;
};
int main()
{
    union data a;//定义共用体变量
    a.x = 40;//引用共用体变量
    printf("%d, %c, %f\n", a.x, a.y, a.z);
    a.y = 's';
    printf("%d, %c, %f\n", a.x, a.y, a.z);
    a.z = 2.5;
    printf("%d, %c, %f\n", a.x, a.y, a.z);
    return 0;
}
