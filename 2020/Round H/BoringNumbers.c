#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define SIZE 20
 
typedef char* string;
 
long BoringNumbers(long L, long R) {
    long count = 0;
    string s = malloc(sizeof(char)*SIZE);
    while (L <= R) {
        sprintf(s, "%ld", L);
        if (CheckNumber(L, s)) {
            count++;
        }
        L++;
    }
    return count;
}
 
int CharToInt(char c) {
    return c - '0';
}
 
int CheckNumber(long number, string s) {
    long pos = 1; int digit;
    size_t n = strlen(s);
    while (pos <= n) {
        digit = CharToInt(s[pos - 1]);
        if (pos % 2 != 0) {
            if (digit % 2 == 0) {
                return FALSE;
            }
        }
        else {
            if (digit % 2 != 0) {
                return FALSE;
            }
        }
        pos++;
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
