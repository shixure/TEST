#include<stdio.h>
int main()
{
    int sum=0,i;
    for (i = 1; i <= 100;i++)
    {
        if(i%5==0&&i%6==0)
        {
            printf("%d是5和6的倍数\n", i);
            sum=sum+i;
        }
        else
        {
        if(i%5==0)
        {
            printf("%d是5的倍数\n", i);
            sum=sum+i;
        }
        if(i%6==0)
        {
            printf("%d是6的倍数\n", i);
            sum=sum+i;
        }
        }
    }
    printf("\n它们之和为：%d", sum);
    getchar();
    getchar();
}