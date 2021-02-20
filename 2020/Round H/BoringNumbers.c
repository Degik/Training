#include <stdio.h>
#define TRUE 1
#define FALSE 0
 
long BoringNumbers(long L, long R) {
    long count = 0;
    while (L <= R) {
        if (CheckNumber(L)) {
            count++;
        }
        L++;
    }
    return count;
}
 
int CheckNumber(long number) {
    long pos = 1; long count = 0;
    long mod;
    long n = number;
    while (n != 0) {
        n /= 10;
        ++count;
    }
    while (number > 0) {
        mod = number % 10;
        // Essendo che per splittare il numero parto dal fondo es: 234, prendera' 4 per primo
        // Devo avere la posizione dal fondo
        if (((pos - count) + 1) % 2 != 0) {
            if (mod % 2 == 0) {
                return FALSE;
            }
        }
        else {
            if (mod % 2 != 0) {
                return FALSE;
            }
        }
        pos++;
        number = number / 10;
    }
    return TRUE;
}
 
int main(void) {
    int T;
    scanf("%d", &T);
    long L, R;
    for (long i = 1; i <= T; i++) {
        scanf("%ld %ld", &L, &R);
        printf("Case #%ld: %ld\n", i, BoringNumbers(L, R));
    }
    return 0;
}