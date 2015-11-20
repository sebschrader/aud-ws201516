#include <stdio.h>

void swap(int *x, int *y) {
    int tmp = *x;
    if (*x % 2 == 1) {
        *y = *y + 1; // (*y)++
    }
    *x = *y;
    *y = tmp;
}

int main(void) {
    int a = 21;
    int b = 42;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    swap(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
