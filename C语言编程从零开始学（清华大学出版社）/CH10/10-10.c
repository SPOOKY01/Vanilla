#include<stdio.h>
struct student
{
    char name[20];
    int score;
};
struct student fun()
{
    struct student x = { "Li Ning", 97 };
    return x;
}
int main()
{
    struct student y = fun();
    printf("姓名 name :%s\n成绩 score:%\n", y.name, y.score);
    return 0;
}
