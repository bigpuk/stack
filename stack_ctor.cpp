#include <stdio.h>

#include "stack_ctor.h"
#include "common.h"

int stack_ctor(stack *stk, size_t size)
{
    stk->memptr = (stack *)calloc(size, sizeof(int));
}