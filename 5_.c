#include <stdio.h>
int main()
{
    int a[6], i, x, s=0;
    for (i = 0; i < 6;i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    for (i = 0; i < 6;i++)
        if (a[i]==x)
        {
            printf("%d", i);
            s = 1;
        }
    if(s==0)
        printf("sorry");
}