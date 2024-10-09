#include <stdio.h>
#include <assert.h>

#include "stack_ctor.h"
#include "common.h"
#include "stack_dump.h"

int stack_ctor(stack *stk, size_t capacity)
{
    assert(stk);

    stk->memptr = (int *)calloc(stk->size, sizeof(int));
    stk->capacity = capacity;

    if(!stk->memptr)
    {
        printf("ERROR! (stack_ctor)");

        return 1;
    }

    return 0;
}