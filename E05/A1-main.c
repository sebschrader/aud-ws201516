#include <stdio.h>
#include "A1.h"

int main(void) {
    int n;
    printf("n = ");
    if (scanf(" %d", &n) != 1) {
        printf("Bad input!\n");
        return 1;
    }
    if (n < 0) {
        printf("Error: n < 0\n");
        return 1;
    }
    printf("%s(%d) = %lld\n", sequence_name, n, sequence(n));
    return 0;
}
