#include <stdio.h>
typedef struct s
{
    int r;
    int sid;
    char name[10];
    int math;
    int english;
    int chinese;
    int sum;
}stu;
stu a[10];

void Swap(stu *m, stu *n)
{
    stu mid;
    mid = *m;
    *m = *n;
    *n = mid;
}
int main()
{
    int num;
    int i, j;
    scanf("%d", &num);
    if (num < 10 && num > 0)
    {
        for (j = 0; j < num; j++)
        {
            scanf("%d %s %d %d %d", &a[j].sid, a[j].name, &a[j].math, &a[j].english, &a[j].chinese);
            a[j].sum = a[j].math + a[j].english + a[j].chinese;
        }

        for (i = 0; i < num; i++)
        {
            for (j = i; j < num; j++)
            {
                if (a[j].sum < a[j + 1].sum)
                {
                    Swap(&a[j], &a[j + 1]);
                }
            }
        }
        for (j = 0; j < num; j++)
        {
            if (a[j].sum == a[j + 1].sum && a[j].sid > a[j + 1].sid)
            {
                Swap(&a[j], &a[j + 1]);
            }
        }
        a[0].r = 1;
        for (j = 1; j < num; j++)
        {
            if (a[j].sum == a[j - 1].sum)
                a[j].r = a[j - 1].r;
            else
                a[j].r = j + 1;
            }
            for (j = 0; j < num; j++)
            {
                printf("%4d%10d%10s%5d%5d%5d\n", a[j].r, a[j].sid, a[j].name, a[j].math, a[j].english, a[j].chinese);
            }
        
    }
    else
    {
        printf("Please input 1-9.");
    }
    return 0;
}
