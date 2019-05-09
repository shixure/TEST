#include <stdio.h>
//#include<time.h>
#include <math.h>
#include <stdlib.h>
double seed = 997;
double rrand()
{
    double lambda = 3125.0;
    double m = 34359738337.0;
    double r;
    seed = fmod(lambda * seed, m); //要包含头文件#include <math.h>
    r = seed / m;
    return r;
}
int main()
{
    int age[20], d[10];
    int i,j;
    //srand(time(NULL));
    for (i = 0; i < 10;i++)
        d[i] = 0;
    for (i = 0; i < 20;i++)
    {
        age[i] = (int)(rrand()*100);
        d[age[i] / 10]++;
    }
    for (j = 0; j < 4;j++)
    {
        for (i = j * 5; i < 5 + j * 5; i++)
            printf("%d ", age[i]);
        printf("\n");
    }
    for (i = 0; i < 10;i++)
        printf("%d ", d[i]);
    getchar();
}