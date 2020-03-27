#include<stdio.h>
struct student
{
    int  num;
    char name[20];
    char sex[3];
    int age;
    float score;
};
int main()
{
    struct student stu[3] = { {10010,"LiYun","M",18,87.5},{10011,"LiXue","W",19,90.5},{10012,"ZhangMing","M",20,96} };
    int i;
    printf("学号\t姓名\t\t性别\t年龄\t成绩\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t%s\t\t%s\t%d\t%.2f\n", \stu[i].num, stu[i].name, stu[i].sex, stu[i].age, stu[i].score);
        printf("\n");
    }
    return 0;
}
