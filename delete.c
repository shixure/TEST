#include <stdio.h>
#include <string.h>
int main()
{
    char a[240];
    int i, j, x, n, m;
    scanf("%s",a);
    scanf("%d", &m);
    n=strlen(a);
    for(i = 1; i <= m;i++)
    {
        for (j = 0; j <= n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                for (x = j; x <= n;x++)
                    a[x] = a[x + 1];
                break;
            }
        }
    }
    printf("%s", a);
}