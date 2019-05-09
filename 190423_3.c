#include<stdio.h>
int main()
{
    int i, x,sum=1;
    printf("请输入一个整数：");
    scanf("%d", &x);
    while(x!=0)
    {
        x = x / 10;
                if(x!=0)
                {
                    sum++;
                }
    }
    printf("该数为%d位数", sum);
}