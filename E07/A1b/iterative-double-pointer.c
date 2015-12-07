#include <stdlib.h>
#include "list.h"
#include "double-pointer.h"

/**
 * Remove all even values from a list.
 *
 * This solution is iterative and uses a double-pointer argument to be able to
 * delete the head of the list.
 */
void rmEvens(struct element **l) {
    struct element **prev = l;
    struct element *current = *prev;
    while (current != NULL) {
        if (current->value % 2 == 0) {
            struct element *temp = current;
            *prev = current->next;
            current = current->next;
            free(temp);
        } else {
            prev = &(current->next);
            current = current->next;
        }
    }
}
