#include<stdio.h>
struct graduate
{
    int year;
    int month;
    int day;
};
struct student
{
    int num;
    char name[20];
    char sex[5];
    int age;
    float score;
    char addr[20];
    struct graduate date;
};
stu = { 10010,"LiHua","M",18,90.5,"BeiJing",2017,9,6 };
int main()
{
    struct student stu1;
    printf("学生学号: ");
    scanf("%d", &stu1.num);
    printf("学生姓名: ");
    scanf("%s", &stu1.name);
    printf("学生姓别: ");
    scanf("%s", &stu1.sex);
    printf("学生年龄: ");
    scanf("%d", &stu1.age);
    printf("学生成绩: ");
    scanf("%f", &stu1.score);
    printf("学生住址: ");
    scanf("%s", &stu1.addr);
    printf("学生毕业时间: ");
    scanf("%d %d %d", &stu1.date.year, &stu1.date.month, &stu1.date.day);
    printf("\n");
    printf("学号\t姓名\t性别\t年龄\t成绩\t住址\n")；
    printf("%d\t%s\t%\t%d\t%5.1f\t%s\n", \sut.num, stu.name, stu.sex, stu.stu.age, stu.score, stu.addr);
    printf("毕业时间: %d年/%d月/%d日\n", stu.date.year, stu1.date.month, stu1.date.day);
    printf("\n");
    printf("学号\t姓名\t性别\t年龄\t成绩\t住址\n")；
    printf("%d\t%s\t%\t%d\t%5.1f\t%s\n", \sut.num, stu.name, stu.sex, stu.stu.age, stu.score, stu.addr);
    printf("毕业时间: %d年/%d月/%d日\n", stu.date.year, stu1.date.month, stu1.date.day);
    return 0;
}
