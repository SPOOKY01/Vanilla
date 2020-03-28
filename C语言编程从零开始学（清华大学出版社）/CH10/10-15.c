#include<stdio.h>
typedef struct student
{
    int num;
    char name[20];
    int Score1;
    int Score2;
    int Score3;
    float average;
}
student;
student st[3];
void CreateStudent(student st[])
{
    int i, j;
    float Average;
    for (i = 0; i < 3; i++)
    {
        printf("请输入学生%d资料:\n", i + 1);
        printf("学号为:");
        scanf("%d", &st[i].num);
        printf("姓名为:");
        scanf("%s", &st[i].name);
        printf("第一门成绩为:");
        scanf("%d", &st[i].Score1);
        printf("第二门成绩为:");
        scanf("%d", &st[i].Score2);
        printf("第三门成绩为:");
        scanf("%d", &st[i].Score3);
        printf("\n");
        st[i].average = (st[i].Score1 + st[i]Score2 + st[i].Score3) / 3;
    }
}
void SortStudent(student st[], int nLength)
{
    int i, j, max;
    student temp;
    for (i = 0; i < nLength; i++)
    {
        max = i;
        for (j = i + 1; j < nLength; j++)
        {
            if (st[j].average > st[max].average)
            {
                max = j;
            }
        }
        if (max != i)
        {
            temp = st[i];
            st[i] = st[max];
            st[max] = temp;
        }
    }
}
int main()
{
    int j;
    CreateStudent(st);
    SortStudent(st, 3);
    printf("学号\t姓名\t语文\t数学\t英语\t平均值\n");
    for (j = 0; j < 3; j++)
    {
        printf("%d", st[j].num);
        printf("\t%s", st[j].name);
        printf("\t%s", st[j].Score1);
        printf("\t%s", st[j].Score2);
        printf("\t%s", st[j].Score3);
        printf("\t%2f", st[j].average);
        printf("\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
    }
}
