#include<stdio.h>
#include<string.h>
struct student
{
    int num;
    char name[20];
    char sex;
    int age;
    chr addr[30];
};
int main()
{
    struct student stu, * p;
    p = &stu;
    stu.num = 10011;
    strcpy(stu.name, "LiXue");
    stu.sex = 'M';
    stu.age = 18;
    strcpy(stu.addr, "GuangZhou");
    printf("学号:%d\t姓名:%s\t性别:%c\t年龄:%d\t住址:%s\n", stu.num, stu.name, stu.sex, stu.age, stu.addr);
    printf("\n");
    printf("学号:%d\t姓名:%s\t性别:%c\t年龄:%d\t住址:%s\n", (*p).num, (*p).name, (*p).sex, (*p).age, (*p).addr);
    printf("\n");
    printf("学号:%d\t姓名:%s\t性别:%c\t年龄:%d\t住址:%s\n", p->num, p->name, p->sex, p->age, p->addr)
    printf("\n");
    return 0;
}
