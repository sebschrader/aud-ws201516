#include "A1c.h"

long long f(int n) {
    if (n == 0) {
        return 1;
    }
    return n - m(f(n - 1));
}

long long m(int n) {
    if (n == 0) {
        return 0;
    }
    return n - f(m(n - 1));
}
