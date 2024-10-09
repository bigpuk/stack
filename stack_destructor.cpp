#include <stdio.h>
#include <assert.h>
#include <math.h>

#include "stack_destructor.h"

int stack_destructor(stack *stk)
{    
    assert(stk);
    
    for(size_t elem = 0; elem < stk->size; elem++)
    {
        stk->memptr[elem] = rand();
    }

    stk->size     = 0;
    stk->capacity = 0;
    free(stk->memptr);
    stk->memptr   = nullptr;

    return 0;
}