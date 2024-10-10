#include <stdio.h>
#include <assert.h>

#include "stack_push.h"
#include "my_recalloc.h"
#include "common.h"
#include "stack_verificator.h"

int stack_push(stack *stk, int num_to_push)
{   
    assert(stk);

    stack_verificator(stk);
    
    if(stk->capacity < (stk->size) + 1)
    {
        my_recalloc(stk, (stk->capacity) * UP_MULTIPLIER, sizeof(int *));
        (stk->capacity) *= UP_MULTIPLIER;
    }

    stk->memptr[stk->size] = num_to_push;

    (stk->size)++;

    stack_verificator(stk);

    return 0;
}