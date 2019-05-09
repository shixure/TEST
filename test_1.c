#include <stdio.h>
int main()
{
    int a[5], i;
    int sum = 0, aver;
    
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    aver = sum / 5.0;
    printf("%d\n", aver);

    for (i = 0; i < 5; i++)
    {
        if (a[i] < aver)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}