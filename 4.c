#include<stdio.h>
int main()
{
    int sum=0,i;
    for (i = 1; i <= 100;i++)
    {
        if(i%5==0&&i%6==0)
        {
            printf("%d��5��6�ı���\n", i);
            sum=sum+i;
        }
        else
        {
        if(i%5==0)
        {
            printf("%d��5�ı���\n", i);
            sum=sum+i;
        }
        if(i%6==0)
        {
            printf("%d��6�ı���\n", i);
            sum=sum+i;
        }
        }
    }
    printf("\n����֮��Ϊ��%d", sum);
    getchar();
    getchar();
}