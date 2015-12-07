#include <stdlib.h>
#include "list.h"
#include "return-value.h"

/**
 * Remove all even values from a list and return a new head if necessary.
 *
 * This solution is recursive and avoids using double-pointers.
 */
struct element *rmEvens(struct element *l) {
    if (l == NULL) {
        return l;
    }
    if (l->value % 2 == 0) {
        struct element *next = l->next;
        free(l);
        return rmEvens(next);
    }
    l->next = rmEvens(l->next);
    return l;
}
