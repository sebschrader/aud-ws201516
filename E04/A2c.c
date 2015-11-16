// for scanf and printf:
#include <stdio.h>
// for the bool type:
#include <stdbool.h>
// for the memset function:
#include <string.h>
// for the sqrt function
#include <math.h>

void sieve(int);

int main(void) {
    printf("n = ");
    int n;
    if (scanf(" %d", &n) != 1) {
        printf("Bad input!\n");
        return 1;
    }
    sieve(n);
}

// See https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes for a extensive
// description of this algorithm
void sieve(int n) {
    bool is_prime[n + 1];
    // Set all elements of the is_prime array to true
    memset(is_prime, true, sizeof(bool) * (n + 1));
    is_prime[0] = false;
    is_prime[1] = false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (is_prime[i]) {
            // Iterate over all primes
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 0; i <= n; i++) {
        if (is_prime[i]) {
            printf("%d\n", i);
        }
    }
}

