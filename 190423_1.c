#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float s=0;
    for (i = 0; i < 20;i++)
    {
        s = s + pow(-1,2+i)*1 / ((1 + i) * (2 + i) * (3 + i));
    }
    printf("%f", s);
    getchar();
    getchar();
}