#include <stdio.h>
#include <assert.h>

#include "stack_verificator.h"

int stack_verificator(stack *stk)
{
    assert(stk);

    int flag = true;

    if(!stk->memptr) flag = false;
                                                                //TODO hash
    if(stk->size > stk->capacity) flag = false;

    return !flag;
}