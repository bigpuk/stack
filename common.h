#ifndef COMMON_H
#define COMMON_H

#include <stdlib.h>

typedef int elem_t;
typedef __int64 canary_t;

struct stack
{
    canary_t canary1;

    char *name;
    elem_t *memptr;
    size_t size;
    size_t capacity;
    
    canary_t canary2;
};

#define POISON -1
#define CANARY1 '14'
#define CANARY2 '15'

#endif