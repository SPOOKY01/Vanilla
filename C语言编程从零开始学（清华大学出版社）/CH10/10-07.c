#include<stdio.h>
struct student
{
    char* name;
    int num;
    int age;
    char sex;
    float score;
}
stu[5] = {
    {"LiYun", 10010, 18, 'M', 84.5},
    {"XiaoMing", 10011, 19, 'M', 70.5},
    {"ZhanHua", 10012, 18, 'M', 98.5},
    {"LiXue", 10013, 17, 'W', 79.0},
    {"WanMin", 10014, 17, 'M', 86.0}
         };
int main()
{
    struct student* p;
    int i;
    p = stu;
    printf("姓名\t\t学号\t\t年龄\t性别\t成绩\t\n");
    for (i = 0; i < 5; i++, p++)
    {
        printf("%s\t\t %d\t\t %d\t%c\t%.1f\n", p->name, p->num, p->age, p->sex, p->score);
    }
    return 0;
}
