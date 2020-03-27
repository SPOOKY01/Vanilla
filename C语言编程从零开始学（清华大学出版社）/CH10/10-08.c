#include<stdio.h>
struct Student
{
    char name[30];
    float score[3];
}
student = {"LiYun",98.5,89.0,93.0};
void fun(struct Student su)
{
    printf("-----成绩单-----\n");
    printf("姓名:%s\n", su.name);
    printf("语文:%.2f\n", su.score[0]);
    printf("数学:%.2f\n", su.score[1]);
    printf("英语:%.2f\n", su.score[2]);
    printf("平均分数是:%.2f", (su.score[0] + su.score[1] + su.score[2]) / 3);
}
int main()
{
    fun(student);
    return 0;
}
