#include<stdio.h>
int main()
{
    int i, x,sum=1;
    printf("������һ��������");
    scanf("%d", &x);
    while(x!=0)
    {
        x = x / 10;
                if(x!=0)
                {
                    sum++;
                }
    }
    printf("����Ϊ%dλ��", sum);
}