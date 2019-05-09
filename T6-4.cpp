#include<stdio.h>
int main()
{
    for (int i = 1; i < 10; i++)
    {
        if (i*i % 10 == i)
            printf("m=%d\n", i);
    }
    for (int i = 10; i < 100; i++)
    {
        if (i*i % 100 == i)
            printf("m=%d\n", i);
    }
    return 0;
}