#include <stdio.h>
#include <stdlib.h>
#define SIZE 100000

int MaxHouse(int *a, int B, int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] <= B) {
            B -= a[i];
            count++;
        }
    }
    return count;
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main(void) {
    int T, N, B;
    int a[SIZE];
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        scanf("%d %d", &N, &B);
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[j]);
        }
        qsort(a, N, sizeof(int), compare);
        printf("Case #%d: %d\n", i, MaxHouse(a, B, N));
    }
    return 0;
}