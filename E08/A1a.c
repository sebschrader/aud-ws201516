#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "list.h"

bool f(list l) {
    if (l == NULL) {
        return true;
    }
    for (; l->next != NULL; l = l->next) {
        if (abs(l->value - l->next->value) > 1) {
            return false;
        }
    }
    return true;
}

int main(void) {
    list l = prompt_list();
    printf("f(<>) = %d\n", f(l));
    free_list(l);
    return 0;
}
