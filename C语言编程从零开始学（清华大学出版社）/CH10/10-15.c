#include<stdio.h>
struct date
{
    int year;
    int month;
    int day;
};
typedef struct ID
{
    char name[20];
    char sex[5];
    char ethnic[5];
    float height;
    float weight;
    struct date birthday;
    char site[20];
}
ID;
ID st[3];
void fun1(ID st[])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("请输入第%d个身份证信息:\n", i + 1);
        printf("姓名:");
        scanf("%s", &st[i].name);
        peintf("性别:");
        scanf("%s", &st[i].sex);
        printf("民族:");
        scanf("%s", &st[i].ethnic);
        printf("身高:");
        scanf("%f", &st[i].height);
        printf("体重:");
        scanf("%f", &st[i].weight);
        printf("出生日期所在的年:");
        scanf("%d", &st[i].birthday.year);
        printf("出生日期所在的月:");
        scanf("%d", &st[i].birthday.month);
        printf("出生日期所在的日:");
        scanf("%d", &st[i].birthday.day);
        printf("地址:");
        scanf("%s", &st[i].site);
        printf("\n");
    }
}
void fun2(int a)
{
    printf("姓名\t性别\t民族\t身高\t体重\t出生年月\t地址\n");
    for (a = 0; a < 3; a++)
    {
        printf("%s", st[a].name);
        printf("\t%s", st[a].sex);
        printf("\t%s", st[a].ethnic);
        pritnf("\t%.2f", st[a].height);
        printf("\t%.2f", st[a].weight);
        printf("\t%d/%d/%d", st[a].birthday.year, st[a].birthday.month, st[a].birthday.day);
        printf("\t%s", st[a].site);
        printf("\n***************************************************************\n");
    }
}
int main()
{
    fun1(st);
    fun2(3);
    return 0;
}
