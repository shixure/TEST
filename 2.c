#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    for (i = 0; i < 2 * a + 1; i++)
        printf("*");
    printf("\n");
    for (i = 0; i <a-1; i++)
        printf("*\n");
    for (i = 0; i < 2 * a + 1; i++)
        printf("*");
    printf("\n");
    for (i = 0; i <a-1; i++)
        printf("*\n");
    for (i = 0; i < 2 * a + 1; i++)
        printf("*");
    printf("\n");
}