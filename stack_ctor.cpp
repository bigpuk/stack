#include <stdio.h>
#include <assert.h>

#include "stack_ctor.h"
#include "common.h"

int stack_ctor(stack *stk)
{
    assert(stk);

    stk->memptr = (int *)calloc(stk->size, sizeof(int));

    if(!stk->memptr)
    {
        printf("ERROR! (stack_ctor)");

        return 1;
    }

    return 0;
}