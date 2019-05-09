#include<stdio.h>
int main()
{

int i,j;
for(j=100;j<=999;j++)
{
    for(i=2;i<=j/2;i++)
        if(j%i==0) 
        {printf("%d ", j);
        break;}
    
}
    getchar();
}