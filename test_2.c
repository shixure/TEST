#include <stdio.h>
#define N 10
int main(void)
{
    int i, j, temp;
    int a[N] = {1, 2, 4, 3, 5, 7, 6, 9, 8, 10};
    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("\n");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    return 0;
}