#include<stdio.h>
int main()
{
    int x,n,y;
    double sum = 0.0;皇家＞白鹰＞重樱＞铁血
    printf("请选择：1、Royal Navy;2、Eagle Union;3、Sakura Empire;4、Iron Blood\n");
    printf("请输入:");
    scanf("%d", &x);
    switch(x)
    {
        case 1:
        printf("请选择:1、伊丽莎白女王(29,150吨);2、光辉(22,000吨);3、胡德(41,200吨);4、厌战(29,150吨);\n");
        printf("输入:");
        scanf("%d",&y);
        printf("数量:(只)");
        scanf("%d",&n);
        switch(y)
        {
            case 1:
            sum = 29150*n;
            break;
            case 2:
            sum = 22000*n;
            break;
            case 3:
            sum = 41200*n;
            break;
            case 4:
            sum = 29150*n;
            break;
        }
        break;
        
        case 2:
        printf("请选择:1、企业(94,000吨);2、萨拉托加(35,000吨);3、海伦娜(9,600吨);4、列克星敦(53,200吨);\n");
        printf("输入:");
        scanf("%d",&y);
        printf("数量:(只)");
        scanf("%d",&n);
        switch(y)
        {
            case 1:
            sum = 94000*n;
            break;
            case 2:
            sum = 35000*n;
            break;
            case 3:
            sum = 9600*n;
            break;
            case 4:
            sum = 53200*n;
            break;
        }
        break;
        
        case 3:
        printf("请选择:1、加贺(26,900吨);2、赤城(34,364吨);3、岛风(2,570吨);4、夕立(1,980吨);\n");
        printf("输入:");
        scanf("%d",&y);
        printf("数量:(只)");
        scanf("%d",&n);
        switch(y)
        {
            case 1:
            sum = 26900*n;
            break;
            case 2:
            sum = 34364*n;
            break;
            case 3:
            sum = 2570*n;
            break;
            case 4:
            sum = 1980*n;
            break;
        }
        break;
        
        case 4:
        printf("请选择:1、欧根亲王(14,240吨);2、Z23(1,300吨);3、齐柏林伯爵(33,000吨);4、罗恩(10,266吨);\n");
        printf("输入:");
        scanf("%d",&y);
        printf("数量:(只)");
        scanf("%d",&n);
        switch(y)
        {
            case 1:
            sum = 14240*n;
            break;
            case 2:
            sum = 1300*n;
            break;
            case 3:
            sum = 33000*n;
            break;
            case 4:
            sum = 10266*n;
            break;
        }
        break;
    }
    printf("总计: %.2f 吨\n", sum);
    return 0;
}
