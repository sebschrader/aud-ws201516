#include <stdio.h>

// In C, any identifier must be declared before it is used. We defined the
// faculty function after the main function, therefore we have to declare it
// here. This is called a forward declaration.
// Note that the parameter list does only types, note the names of the
// parameters. The names are optional in forward declarations.
int faculty(int);

int main(void) {
    int n;
    printf("n = ");
    if (scanf(" %d", &n) != 1) {
        printf("Bad input.\n");
        return 1;
    }
    if (n < 0) {
        printf("n must be greater than or equal to 0.\n");
        return 1;
    }
    printf("n! = %d\n", faculty(n));
    return 0;
}

int faculty(int n) {
    int f = 1;
    // i++ is a shorthand for i = i + 1
    for (int i = 1; i <= n; i++) {
        f *= i; // This is a shorthand for f = f * i;
    }
    return f;
}
