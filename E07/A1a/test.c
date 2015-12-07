#include <stdio.h>
#include "list.h"
#include "sum.h"

int main(void) {
    list l = prompt_list();
    printf("sum(<>) = %d\n", sum(l));
    free_list(l);
}

