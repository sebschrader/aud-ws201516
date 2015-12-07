#include <stdlib.h>
#include "sum.h"

int sum(struct element *elem) {
    int s = 0;
    for (/* not initialization */; elem != NULL; elem = elem->next) {
        s += elem->value; // s = s + elem->value;
    }
    return s;
}
