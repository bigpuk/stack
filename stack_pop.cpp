#include <stdio.h>
#include <assert.h>

#include "stack_pop.h"
#include "my_recalloc.h"
#include "stack_verificator.h"

int stack_pop(stack *stk)
{
    assert(stk);

    stack_verificator(stk);

    int return_value = 0;

    return_value = stk->memptr[(stk->size) - 1];
    stk->memptr[(stk->size) - 1] = POISON;

    (stk->size)--;

    if(stk->capacity > (stk->size) * DOWN_TRNSITIONAL_VALUE)
    {
        my_recalloc(stk, (stk->capacity) / DOWN_DEVIDER, sizeof(int *));
        (stk->capacity) /= DOWN_DEVIDER;
    }

    stack_verificator(stk);

    return return_value;
}