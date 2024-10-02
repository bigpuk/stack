#include <stdio.h>
#include <assert.h>

#include "stack_pop.h"

int stack_pop(stack *stk)
{
    assert(stk);

    int temp = 0;

    temp = stk->memptr[(stk->size) - 1];
    stk->memptr[(stk->size) - 1] = 0;

    return temp;
}