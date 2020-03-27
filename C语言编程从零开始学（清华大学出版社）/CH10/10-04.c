#include<stdio.h>
#include<string.h>
struct student
{
    int num;
    char name[20];
    char sex[3];
};
int main()
{
    struct student str[3];
    int M = 0, W = 0, i;
    for (i = 0; i < 3; i++)
    {
        printf("请输入第 %d 个学生:", i + 1);
        scanf("%d", &stu[i].num);
        scanf("%s", &stu[i].name);
        scanf("%s", &stu[i].sex);
        if (strcmp(stu[i].sex, "M") == 0)
        {
            M++;
        }
        else
        {
            W++;
        }
    }
    printf("\n学号\t姓名\t\t性别\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t%s\t\t%s\n", stu[i].num, stu[i].name, stu[i].sex);
    }
    printf("\n男孩有 %d 个\n", M);
    printf("\n女孩有 %d 个\n", W);
    return 0;
}
