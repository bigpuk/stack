#include <stdio.h>
#include <assert.h>

#include "stack_pop.h"
#include "my_recalloc.h"

int stack_pop(stack *stk)
{
    assert(stk);

    int temp = 0;

    temp = stk->memptr[(stk->size) - 1];
    stk->memptr[(stk->size) - 1] = POISON;

    (stk->size)--;

    if(stk->capacity > (stk->size) * 2)
    {
        my_recalloc(stk, (stk->capacity) / 2, sizeof(int *));
        (stk->capacity) /= 2;
    }

    return temp;
}