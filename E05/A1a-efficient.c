#include "A1a.h"

long long fib2(int n, long long s1, long long s2) {
    if (n == 0) {
        return s1;
    }
    if (n == 1) {
        return s2;
    }
    return fib2(n - 1, s2, s1 + s2);
}

long long fib(int n) {
    return fib2(n, 0, 1);
}
