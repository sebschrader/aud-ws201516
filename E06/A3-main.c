#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int palindrome(const char *, int);

int main(void) {
    printf("Enter word: ");
    char *word;
    scanf(" %m[^\n]", &word);
    if (palindrome(word, strlen(word))) {
        printf("`%s' is a palindrome\n", word);
    } else {
        printf("`%s' is not a palindrome\n", word);
    }
    free(word);
    return 0;
}
