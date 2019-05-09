#include <stdio.h>
#include <stdlib.h>

int yuesu(int x)
{
    int i = 1, sum = 0;
    if (x == 1)
        return 1;
    while (i < x)
    {
        if (x % i == 0)
            sum += i;
        i++;
    }
    return sum;
}
int main()
{
    int x, y;
    int i, j;
    int s = 0;
    scanf("%d%d", &x, &y);
    int min, max;
    if (x > y)
    {
        max = x;
        min = y;
    }
    else
    {
        max = y;
        min = x;
    }
    int *array = (int *)malloc(sizeof(int) * (max - min + 1));
    for (i = 0; i < max - min + 1; i++)
        array[i] = yuesu(min + i);
    for (i = 0; i < max - min + 1; i++)
    {
        for (j = i + 1; j < max - min + 1; j++)
        {
            if (array[i] == j + min && array[j] == i + min)
            {
                printf("%d %d\n", i + min, j + min);
                s = 1;
            }
        }
    }
    if (s == 0)
        printf("NONE");
    return 0;
}