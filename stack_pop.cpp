#include <stdio.h>
#include <assert.h>

#include "stack_pop.h"
#include "my_recalloc.h"
#include "stack_verificator.h"
#include "stack_dump.h"

int stack_pop(stack *stk)
{
    assert(stk);

    if(stk->size)
    {
        ERRORS_PRINT(stack_verificator(stk));

        int return_value = 0;

        return_value = stk->memptr[(stk->size) - 1];
        stk->memptr[(stk->size) - 1] = POISON;

        (stk->size)--;

        if(stk->capacity > (stk->size) * DOWN_TRNSITIONAL_VALUE && stk->capacity > DEFAULT_CAPACITY)
        {
            (stk->capacity) /= DOWN_DEVIDER;
            
            my_recalloc(stk, stk->capacity, sizeof(int *));
        }

        ERRORS_PRINT(stack_verificator(stk));

        return return_value;
    }
    else
    {
        stk->underflow = STACK_UNDERFLOW;
        ERRORS_PRINT(stack_verificator(stk));

        return -1;
    }
}