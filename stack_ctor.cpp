#include <stdio.h>
#include <assert.h>

#include "stack_ctor.h"
#include "common.h"
#include "stack_dump.h"
#include "stack_verificator.h"
#include "stack_dump.h"

int stack_ctor(stack *stk, size_t capacity)
{
    assert(stk); 

    stk->capacity = capacity;

    stk->memptr = (int *) calloc(stk->capacity * sizeof(elem_t) + 2 * sizeof(canary_t), sizeof(char));
    
    if(!stk->memptr)
    {
        printf("ERROR! (stack_ctor)");

        return OUT_OF_MEMORY;
    }

    stk->canary1 = CANARY;
    stk->canary2 = CANARY;

    stk->canary3 = (canary_t *) (stk->memptr);
    stk->canary4 = (canary_t *) ((char *) stk->memptr + stk->capacity * sizeof(elem_t) + sizeof(canary_t));

    *(stk->canary3) = CANARY;
    *(stk->canary4) = CANARY;

    stk->memptr = (int *) ((char *) stk->memptr + sizeof(canary_t));

    DUMP(stk);

    ERRORS_PRINT(stack_verificator(stk));

    return 0;
}