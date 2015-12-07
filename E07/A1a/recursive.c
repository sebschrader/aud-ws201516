#include <stdlib.h>
#include "sum.h"

// int sum(list elem) {
int sum(struct element *elem) {
    if (elem == NULL) {
        return 0;
    }
    return elem->value + sum(elem->next);
}
