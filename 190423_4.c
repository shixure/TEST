#include <stdio.h>
int main()
{
	int t=0,s=0,i;
	for(i=1;i<=5;i++)
	{
        t = t * 10 + i;
        s=s+t;
	}
    printf("s=%d\n",t);
    getchar();
    getchar();
}
