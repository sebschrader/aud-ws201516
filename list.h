#ifndef __LIST_H__
#define __LIST_H__

typedef struct element *list;
typedef struct element {
    int value;
    list next;
} element;

list parse_list(const char *);

list prompt_list(void);

void print_list(list);

void free_list(list);

#endif
