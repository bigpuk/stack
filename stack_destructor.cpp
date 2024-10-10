#include <stdio.h>
#include <assert.h>

#include "stack_destructor.h"
#include "stack_verificator.h"

int stack_destructor(stack *stk)
{
    for(size_t elem = 0; elem < stk->size; elem++)
    {
        stk->memptr[elem] = 0;
    }

    stk->size     = 0;
    stk->capacity = 0;

    free(stk->memptr);

    return 0;
}