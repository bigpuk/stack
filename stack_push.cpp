#include <stdio.h>

#include "stack_push.h"
#include "common.h"

int stack_push(stack *stk)
{
    if(((stk->size + 1) * sizeof(int)) > stk->capacity) stk->memptr = (stack *)calloc((stk->size) * 2, sizeof(int));
    
    (stk->size)++;
    (stk->memptr)[stk->size]
}