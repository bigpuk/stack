#include <stdio.h>
#include <assert.h>

#include "stack_ctor.h"
#include "common.h"
#include "stack_dump.h"
#include "stack_verificator.h"

int stack_ctor(stack *stk, size_t capacity)
{
    assert(stk);

    stk->capacity = capacity;

    stk->memptr = (int *)calloc(stk->capacity, sizeof(int));
    
    if(!stk->memptr)
    {
        printf("ERROR! (stack_ctor)");

        return 1;
    }

    stk->canary1 = (canary_t)stk->memptr - sizeof(__int64);
    stk-> canary2 = (canary_t)stk->memptr + 1;

    stack_verificator(stk);

    return 0;
}