#include "stdio.h"
#include "stdlib.h"
#define maxsize 100

typedef struct node
{
    int data[maxsize];
    int length;
} seqlist, *pseqlist;

pseqlist init_seqlist(void)
{
    pseqlist PL;
    PL = (pseqlist)malloc(sizeof(seqlist));
    if (PL)
    {
        PL->length = 0;
    }
    return (PL);
}