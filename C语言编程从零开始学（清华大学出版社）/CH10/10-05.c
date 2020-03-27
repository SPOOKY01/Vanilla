#include<stdio.h>
#include<string.h>
struct student
{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
};
int main()
{
    struct stufent stu, * p;
    p = &stu;
    stu.num = 10010;
    strcyp(stu.name, "XiaoMing");
    stu.sex = 'M';
    stu.age = 18;
    stu.score = 77.5;
    strcpy(stu.addr, "BeiJing");
    printf("学号: %d\n", (*p).num);
    printf("姓名: %s\n", (*p).name);
    printf("性别: %c\n", (*p).sex);
    printf("年龄: %d\n", (*p).age);
    printf("成绩: %.2f\n", (*p).score);
    printf("住址: %s\n", (*p).addr);
    return 0;
}
