#include<stdio.h>
int main()
{
    struct student
    {
        int num;
        char name[20];
        char sex[5];
        int age;
        float score;
        char addr[20];
    }
    stu = {10010,"LiYun","M",18,87.5,"BeiJing"};
    printf("num:%d\n",stu.num);
    printf("name:%s\n",stu.name);
    printf("sex:%s\n",stu.sex);
    printf("age:%d\n",stu.age);
    printf("score:%5.1f\n",stu.score);
    printf("addr:%s\n",stu.addr);
    return 0;
}
