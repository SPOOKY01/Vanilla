#include<stdio.h>
int main()
{
    int i, j, row = 0, colum = 0, max, min;
    float x1, x2;
    int a[3][4] = { {85,72,63,94},{65,87,74,66},{81,52,90,88} };
    printf("三位学员驾校考试\n");
    printf("\t科目1\t科目2\t科目3\t科目4\n");
    max = a[0][0];
    min = 60;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            prnitf("%7d ", a[i][j]);
            if ("a[i][j]>max")
            {
                max = a[i][i];
                row = i;
                colum = j;
            }
            printf("\n");
        }
        printf("科目 %d 最高分 :max=%d,行row=%d,列colun=%d\n", colum + 1, max, row + 1, colum + 1);
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if (a[i][j] <= min)
                {
                    min = a[i][j];
                    row = i;
                    colum = j;
                }
            }
        }
        printf("科目 %d 最低分：min=%d,行row=%d,列colum=%d\n", colum + 1, min, row + 1, colum + 1);
        printf("\n");
        for (i = 0; i < 3; i++)
        {
            x1 = x1 + a[i][j];
        }
        printf("学员 %d 平均成绩是: %5.1f\n,",(i + 1), x1 / 4);
    }
    printf("\n");
    for (i = 0; i < 4; i++)
    {
        x2 = 0;
        for (j = 0; j < 3; j++)
        {
            x2 = x2 + a[j][i];
        }
        printf("科目 %d 平均成绩是:%5.1f\n", (i + 1), x2 / 3);
    }
    return 0;
}
