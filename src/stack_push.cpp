#include <stdio.h>
#include <assert.h>

#include "stack_push.h"
#include "my_recalloc.h"
#include "common.h"
#include "stack_verificator.h"
#include "stack_dump.h"
#include "errors.h"

int stack_push(stack *stk, int num_to_push)
{   
    assert(stk);

    ERRORS_PRINT(stack_verificator(stk));
    
    if(stk->capacity < (stk->size) + 1)
    {
        (stk->capacity) *= UP_MULTIPLIER;

        my_recalloc(stk, stk->capacity, sizeof(int *));
    }

    stk->memptr[stk->size] = num_to_push;

    (stk->size)++;

    ERRORS_PRINT(stack_verificator(stk));

    return 0;
}