#ifndef COMMON_H
#define COMMON_H

#include <stdlib.h>

typedef int elem_t;

struct stack
{
    char *name;
    elem_t *memptr;
    size_t size;
    size_t capacity;
};

#define POISON -1337

#endif