#include "A1.h"

long long g(int n) {
    if (n == 0) {
        return 0;
    }
    return n - g(g(n - 1));
}

const char *sequence_name = "G";

long long sequence(int n) {
    return g(n);
}
