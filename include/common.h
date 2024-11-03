#ifndef COMMON_H
#define COMMON_H

#include <stdlib.h>

#include "errors.h"

typedef int elem_t;
typedef __int64 canary_t;

struct stack
{
    canary_t canary1;

    char *name;
    elem_t *memptr;
    size_t size;
    size_t capacity;
    canary_t *canary3;
    canary_t *canary4;
    ERRORS underflow;

    canary_t canary2;
};

#define POISON -1337
#define CANARY 0xC0FFEE
#define DEFAULT_CAPACITY 16

#endif