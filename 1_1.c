#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10

typedef struct Students {
    int id;
    char name[10];
    int math;
    int en;
    int ch;

}STU;

STU stu[N];

void sortInfo(STU stu[], int n);
void swapInfo(STU *p, STU *q);

int main() {
    int n = 10, m = 0, w = 1;

        scanf("%d", &n);
        if (n>9||n<1) {
            printf("Please input 1-9.");
            return 0;
            }

    for (int i = 0; i<n; i++) {
        scanf("%d%s%d%d%d", &stu[i].id, &stu[i].name, &stu[i].math, &stu[i].en, &stu[i].ch);

    }
    sortInfo(stu, n);
    for (int i = 0; i < n; i++) {

        if (i >0) {
            if ((stu[i].en + stu[i].ch + stu[i].math) == (stu[i - 1].en + stu[i - 1].ch + stu[i - 1].math)) {
                m++;
                printf("%4d", w - m);
            }
            else {
                printf("%4d", w);
                m = 0;
            }
        }
        else {
            printf("%d", w);
        }
        printf("%10d%10s%5d%5d%5d\n", stu[i].id, stu[i].name, stu[i].math, stu[i].en, stu[i].ch);

        w++;
    }
    return 0;
}

void sortInfo(STU stu[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            int a = stu[j].en + stu[j].ch + stu[j].math, b = stu[j + 1].en + stu[j + 1].ch + stu[j + 1].math;
            if (a<b) {
                swapInfo(&stu[j], &stu[j + 1]);
            }
            else if ((a == b) && (stu[j].id >stu[j + 1].id)) {
                swapInfo(&stu[j], &stu[j + 1]);
            }
        }
    }

}
void swapInfo(STU *p, STU *q) {
    STU trmp;
    trmp = *p; *p = *q; *q = trmp;
}