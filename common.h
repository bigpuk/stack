#ifndef COMMON_H
#define COMMON_H

#include <stdlib.h>

struct stack
{
    void *memptr;
    size_t size;
    size_t capacity;
};

#endif