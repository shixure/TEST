#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 10;i++)
    {
        sum = sum + i;
        if(sum>20)
            break;
        i++;
    }
    printf("sum=%d,i=%d", sum, i);
    
}