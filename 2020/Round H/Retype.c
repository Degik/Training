#include <stdio.h>
#include <stdlib.h>
long GameTimeCase1(long N, long K) {
    long Case2 = N + 1 + (K - 1);
    return Case2;
}

long GameTimeCase2(long N, long K, long S) {
    long Case1 = K + K - S + N - S;
    return Case1;
}

int main(void) {
    long T;
    scanf("%ld", &T);
    long N, K, S;
    long Case1;
    long Case2;
    for (long i = 1; i <= T; i++) {
        scanf("%ld %ld %ld", &N, &K, &S);
        Case1 = GameTimeCase1(N, K);
        Case2 = GameTimeCase2(N, K, S);
        if (Case1 < Case2) {
            printf("Case #%ld: %ld\n", i, Case1);
        }
        else {
            printf("Case #%ld: %ld\n", i, Case2);
        }
    }
    return 0;
}