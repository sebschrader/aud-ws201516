#include <stdio.h>
#include "list.h"
#include "double-pointer.h"

int main(void) {
    struct element *l = prompt_list();
    printf("Got the following list: ");
    print_list(l);
    printf("Removing evens: ");
    rmEvens(&l);
    print_list(l);
    free_list(l);
    return 0;
}

