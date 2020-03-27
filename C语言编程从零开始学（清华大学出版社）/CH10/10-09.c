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
    {"Li", 10010, 18, 'M', 145.5},
    {"Zhang", 10011, 19, 'w', 120.5},
    {"He", 10012, 18, 'W', 98.5},
    {"Cheng", 10013, 17, 'M', 139.0},
    {"Wang", 10014, 17, 'M', 144.5} 
};
void fun(struct student* p, int a);
int main()
{
    int a = 5;
    struct student* p;
    int i;
    p = stu;
    printf("\t\t学生的体育成绩\n");
    printf("姓名\t学号\t年龄\t性别\t成绩\t\n");
    for (i = 0; i < 5; i++, p++)
    {
        printf("%s\t%d\t%d\t%c\t%.1f\n", p->name, p->num, p->age, p->sex, p->score);
    }
    printf("\n");
    fun(stu, a);
    return 0;
}
void fun(struct student* p, int a)
{
    int i, num_130 = 0;
    float average, sum = 0;
    for (i = 0; i < a; i++)
    {
        sum += (p + i)->score;
        if ((p + i)->score < 130)
        {
            num_130++;
        }
    }
    printf("总成绩 sum=%.2f\n平均成绩 average=%.2f\n不及格人数 num_130=%d\n", sum, sum / 5, num_130);
}
