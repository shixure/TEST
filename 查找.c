/*
���ڸ�����һ�鰴�մ�С���������������ͨ����ͨ���ҷ����Ͷ��ֲ��ҵķ����ж�һ�����Ƿ�����������С�
*/

#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100
typedef int KeyType; //����
typedef struct
{
    KeyType key;
} DataType;
typedef struct
{
    DataType list[MaxSize];
    int size;
} SeqList;

void ListInitiate(SeqList *L)
{
    L->size = 0; /*�����ʼ����Ԫ�ظ���*/
}

int creat(SeqList *L, int n)
{
    int i;
    printf("input the datas:");
    for (i = 0; i < n; i++)
        scanf("%d", &L->list[i]);
    return 1;
}

int ListLength(SeqList *L)

{
    return L->size;
}

int SeqSearch(SeqList *s, KeyType k)
//�ڱ�s��˳����ҹؼ���k�������ҳɹ����򷵻ظ�Ԫ���ڱ��е�λ�ã�������ʧ�ܣ�����-1
{
    for (int i = 0; i < s->size; i++)
    {
        if (s->list[i].key == k)
            return i;
    }
    return -1;
}

int BinSearch(SeqList *s, KeyType k)
//�ڱ�s�����۰���ҷ����ҹؼ���k�������ҳɹ�������ֵΪ��Ԫ���ڱ��е�λ�ã�������ʧ�ܣ�����-1��
{

}

int main()
{

}
