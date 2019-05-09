/*
���������ö����������洢�ṹ���Ա��ʵ�ֶ����������»���������
1. ���������й���һ�ö��������ʾ�Ķ�����T��
2. ����ö��������б������������򡢺����Լ���α������У��ֱ�������ı������У�
3. ������������/�����Ŀ/Ҷ�����Ŀ��
*/
#include <malloc.h>
#include <stdio.h>
#define Null 0
typedef char ElemType;
typedef struct node
{
    ElemType data;
    struct node *lchild;
    struct node *rchild;
} BTree, *pBTree;

//���򴴽���
void CreateBTree(BTree **T)
//�˴�����Ӧ����ָ���ָ�룬Ӧ����Ҫ�ı�ָ������������Ǹ�ָ��
{
    char ch;
    printf("���������������\n");
    ch = getchar();
    getchar();     //�õ��س����Ǹ��ַ�
    if (ch == '/') //������ַ�ʱҪ��ո�
    {
        (*T) = NULL;
        return;
    }
    else
    {
        if (!((*T) = (BTree *)malloc(sizeof(BTree))))
            return;
        (*T)->data = ch;

        CreateBTree(&(*T)->lchild);
        CreateBTree(&(*T)->rchild);
    }
}

void BTreePrint(BTree *Tr, int n)
//��ʱ����ת90���ӡ��������nΪ������������ʼֵΪ0
{
    int i;
    if (Tr == NULL)
        return;

    BTreePrint(Tr->rchild, n + 1);
    for (i = 0; i < n; i++)
        printf("  ");
    if (n >= 0)
    {
        printf("--");
        printf("%c\n", Tr->data);
    }
    BTreePrint(Tr->lchild, n + 1);
}

void pre(BTree *T)
{
    if(T)
    {
        printf("%c", T->data);
        pre(T->lchild);
        pre(T->rchild);
    }
}

void in(BTree *T)
{
    if (T)
    {
        in(T->lchild);
        printf("%c", T->data);
        in(T->rchild);
    }
}

void post(BTree *T)
{
    if (T)
    {
        post(T->lchild);
        post(T->rchild);
        printf("%c", T->data);
    }
}

int getnodes(BTree *T)
{
    int n1 = 0, n2 = 0;
    if (T == Null)
        return 0;
    else if (T->lchild == Null && T->rchild == Null)
        return 1;
    else
    {
        n1 = getnodes(T->lchild);
        n2 = getnodes(T->rchild);
        return (n1 + n2 + 1);
    }
}

int getlefs2(BTree *T)
{
    static int n = 0;
    if (T)
    {
        getlefs2(T->lchild);

        getlefs2(T->rchild);
        if (T->lchild == Null && T->rchild == Null)
        {
            n++;
        }
    }
    return n;
}

int getlefes(BTree *T)
{
    int n1 = 0, n2 = 0;
    if (T == Null)
        return 0;
    else if (T->lchild == Null && T->rchild == Null)
        return 1;
    else
    {
        n1 = getlefes(T->lchild);
        n2 = getlefes(T->rchild);
        return (n1 + n2);
    }
}

int depth(BTree *T)
{
    int h1=0, h2=0;
    if (T != Null)
    {
        h1 = depth(T->lchild);
        h2 = depth(T->rchild);
        if(h1>h2)
            return h1 + 1;
        else
            return h2 + 1;
    }
    return 0;
}

int count(BTree *t)
{
    static int c = 0;
    if (t != Null)
    {
        count(t->lchild);
        c++;
        count(t->rchild);
    }
    return c;
}

int main()
{
    int a, b;
    BTree *bTree;
    CreateBTree(&bTree);
    BTreePrint(bTree, 0);
    printf("�����������");
    pre(bTree);
    printf("�����������");
    in(bTree);
    printf("�����������");
    printf("\n");
    post(bTree);
    printf("���������%d\n", getnodes(bTree));
    printf("Ҷ��������%d\n", getlefes(bTree));
    a = count(bTree);
    printf("���Ͻ������%d\n", a);
    b = getlefs2(bTree);
    printf("����Ҷ��%d\n", b);
    printf("���ĸ߶���%d\n", depth(bTree));
    getchar();getchar();
}
