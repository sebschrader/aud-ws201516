#include "A1a.h"

long long fib(int n) {
    long long s1 = 0, s2 = 1;
    for (int i = 0; i < n; i++) {
        long long tmp = s1 + s2;
        s1 = s2;
        s2 = tmp;
    }
    return s1;
}
