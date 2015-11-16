#include <stdio.h>

int main(void) {
    char *name;
    printf("Please enter your name: ");
    /* This format string means:
      ' '  read any whitespace (space, tab, newlines)
      '%'  start of a format directive
      'm'  allocate space for the name using malloc
      '['  set of characters to accept
      '^'  exclude instead of accept
      '\n' the newlone
      ']'  close set of characters
    */
    scanf(" %m[^\n]", &name);
    printf("Hello %s!\n", name);
    return 0;
}
