#include <stdio.h>
#include <assert.h>

#include "stack_push.h"
#include "my_recalloc.h"
#include "common.h"

int stack_push(stack *stk, int num_to_push)
{   
    assert(stk);
    
    if(stk->capacity < (stk->size) + 1)
    {
        my_recalloc(stk, (stk->capacity) * UP_MULTIPLIER, sizeof(int *));
        (stk->capacity) *= UP_MULTIPLIER;
    }

    stk->memptr[stk->size] = num_to_push;

    (stk->size)++;
}