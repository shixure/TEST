#include <stdio.h>
int main()
{
    int a[9],i,mid;
    for (i = 0; i < 9;i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 9;i++)
        printf("%d ", a[i]);
    for (i = 0; i < 4;i++)
    {
        mid = a[i];
        a[i] = a[i + 5];
        a[i + 5] = mid;
    }
    printf("\n");
    for (i = 0; i < 9;i++)
        printf("%d ", a[i]);
    getchar();
    getchar();
}