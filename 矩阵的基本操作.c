/*
����һ��ϡ�����A,����A����Ԫ��˳���,��A��ת�þ���B,��������ת�÷�ʵ��ϡ������ת��,
ע�����Ľ����������ʵ�֡�
*/
#include <malloc.h>
#include <stdio.h>
#include <string.h>
typedef int Telemtype;
#define Ok 1
#define Maxsize 10

typedef struct Triple
{ /*������Ԫ���*/
    int i, j;
    Telemtype v;
} Triple;

typedef struct TSMatrix
{
    Triple data[Maxsize];
    int m;
    int n;
    int t;
} TSMatrix;

void InitTriple(TSMatrix *a)
{ /*������Ԫ���*/
    int i, j, k, val, maxrow, maxcol;
    // char contiue;
    maxrow = 1;
    maxcol = 1;
    i = j = 1;
    k = 0;
    while (i != -1 && j != -1 && val != -1)
    { /*rol=-1&&col=-1��������*/
        printf("input row \n");
        scanf("%d", &i);
        printf("input col \n");
        scanf("%d", &j);
        printf("input value\n");
        scanf("%d", &val);
        a->data[k].i = i;
        a->data[k].j = j;
        a->data[k].v = val;
        if (maxrow < i)
            maxrow = i;
        if (maxcol < j)
            maxcol = j;
        k++;
    }
    a->m = maxrow;
    a->n = maxcol;
    a->t = k - 1;
}

void FastTranspose(TSMatrix a, TSMatrix *b)
{
    /*ϡ�����(��Ԫ��洢�ṹ)ת���㷨*/
    int p, q, col;
    int num[a.n + 1];
    int cpot[a.n + 1];
    b->m = a.n;
    b->n = a.m;
    b->t = a.t;
    if (a.t != 0)
    {
        for (col = 1; col <= a.n; col++)
            num[col] = 0;
        for (int t = 1; t <= a.t; t++)
            ++num[a.data[t].j];
        cpot[1] = 1;
        for (col = 2; col <= a.n; col++)
            cpot[col] = cpot[col - 1] + num[col - 1];
        for (p = 0; p < a.t; p++)
        {
            col = a.data[p].j;
            q = cpot[col]; //p ���� ����a��λ�ã�q������b��Ҫ�����λ�á�
            b->data[q].j = a.data[p].i;
            b->data[q].i = a.data[p].j;
            b->data[q].v = a.data[p].v;
            ++cpot[col]; //λ�÷����仯 �Զ���һ
        }
    }
}
void showMatrix(TSMatrix *a)
{ /*���ϡ�����*/
    int p, q;
    int t = 0;
    for (p = 1; p <= a->m; p++)
    {
        for (q = 1; q <= a->n; q++)
        {
            if (a->data[t].i == p && a->data[t].j == q)
            {
                printf("%d   ", a->data[t].v);
                t++;
            }
            else
                printf("0   ");
        }
        printf("\n");
    }
}

void TransposeSMatrix(TSMatrix *a, TSMatrix *b)
{
    int p, q, col;
    b->m = a->n;
    b->n = a->m;
    b->t = a->t;
    if (b->t)
    {
        q = 0;
        for (col = 1; col <= a->n; col++)
            for (p = 0; p < a->t; p++)
                if (a->data[p].j == col)
                {
                    b->data[q].j = a->data[p].i;
                    b->data[q].i = a->data[p].j;
                    b->data[q].v = a->data[p].v;
                    q++;
                }
    }
}


int main()
{
    TSMatrix a, b;

    InitTriple(&a);
    printf("ԭ��������\n");
    showMatrix(&a); /*ת��ǰ*/
    TransposeSMatrix(&a, &b);
    printf("��ͨת�ú������\n");
    showMatrix(&b); /*ת�ú�*/
    FastTranspose(a, &b);
    printf("����ת�ú������\n");
    showMatrix(&b); /*ת�ú�*/
    getchar();getchar();
}
