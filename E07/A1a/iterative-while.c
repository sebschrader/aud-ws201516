#include <stdlib.h>
#include "sum.h"

int sum(struct element *elem) {
    int s = 0;
    while(elem != NULL) {
        s += elem->value;
        elem = elem->next;
    }
    return s;
}
