#include <stdio.h>
#include <assert.h>
#include <typeinfo>

#include "stack_verificator.h"
#include "stack_dump.h"
#include "errors.h"

ERRORS stack_verificator(stack *stk)
{
    assert(stk);
                                                    //TODO flag -> errors
    if(!stk->memptr) return OUT_OF_MEMORY;
                                                                //TODO hash
    if(stk->size > stk->capacity) return STACK_OVERFLOW;

    if(stk->capacity <= 0) return STACK_CAPACITY_0;

    if((int *)stk->memptr != stk->memptr) return STACK_INVALID_TYPE;

    if(!stk->canary3 || !stk->canary4) return CANARY3_DAMAGED;

    if(stk->canary1 != CANARY) return CANARY1_DAMAGED;
    else if(stk->canary2 != CANARY) return CANARY2_DAMAGED;

    if(*(stk->canary3) != CANARY) return CANARY3_DAMAGED;
    else if(*(stk->canary4) != CANARY) return CANARY4_DAMAGED;

    if(stk->underflow) return STACK_UNDERFLOW;

    return OK;
}