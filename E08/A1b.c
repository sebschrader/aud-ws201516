#include <stdlib.h>
#include <stdio.h>
#include "tree.h"

void defol(tree *p) {
    // Remember: p actually has type struct node **, which is a double pointer
    // We can therefore check p for NULL and *p for NULL.
    // Checking p == NULL does not make sense, because p == NULL means the
    // caller wants defol to remove all leaf nodes, but doesn't tell defol where
    // the tree is.
    // *p == NULL on the other hand means, that the tree is empty.
    tree t = *p;
    if (t == NULL) {
        return;
    }
    if (t->left == NULL && t->right == NULL) {
        *p = NULL; // this not the same as t = NULL; !!!
        free(t);
    } else {
        defol(&(t->left));
        defol(&(t->right));
    }
}

// We had to use the interface that was given in the assignment. If we had had
// choice, we could have implemented defol with an alternative interface as
// follows:
tree defol2(tree t) {
    if (t == NULL) {
        return NULL;
    }
    if (t->left == NULL && t->right == NULL) {
        free(t);
        return NULL;
    } else {
        t->left = defol2(t->left);
        t->right = defol2(t->right);
        return t;
    }
}

int main(void) {
    tree t = prompt_tree();
    printf("t: ");
    print_tree(t);
    defol(&t);
    printf("t after defol: ");
    print_tree(t);
    return 0;
}
