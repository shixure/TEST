#include<stdio.h>
int main()
{
    int i, s=1;
    for (i = 0; i < 10;i++)
    {
        s = (s + 1) * 2;
    }
    printf("%d", s);
}