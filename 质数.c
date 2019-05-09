#include<stdio.h>
int main()
{   
    int n,a=0,sum=0;
    scanf("%d", &n);
    for (int i = 2; i <= n;i++)
    {
        a = 0;
        for (int j = 1; j < i;j++)
        {
            if(i%j==0)
                a++;
        }
        if(a=1)
            sum++;
    }
    printf("%d", sum);
    return 0;
}