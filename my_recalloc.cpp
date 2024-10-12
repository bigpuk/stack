#include <stdio.h>
#include <assert.h>
#include <mem.h>

#include "my_recalloc.h"
#include "errors.h"
#include "stack_dump.h"
#include "stack_push.h"
#include "stack_verificator.h"

ERRORS recalloc_check(stack *stk);

void *my_recalloc(stack *stk, size_t elem_num, size_t elem_size)
{
    assert(stk);
    
    stk->memptr = (int *) ((char *) stk->memptr - sizeof(canary_t));

    stk->memptr = (int *) realloc(stk->memptr, elem_num * elem_size + 2 * sizeof(canary_t));
    
    ERRORS_PRINT(recalloc_check(stk));

    stk->canary4 = (canary_t *) ((char *) stk->memptr + elem_num * sizeof(elem_t) + sizeof(canary_t));
    *(stk->canary4) = CANARY;

    //printf("%dnnnnnnnnnnnnnnnnnnnnnn", recalloc_check(stk));

    if(stk->size < elem_num)
    {
        void *memset_ptr = (void*)((char*) stk->memptr + stk->size * sizeof(elem_t) + sizeof(canary_t));          //(void *)((char *)stk->memptr + stk->size * sizeof(int))
        
        memset(memset_ptr, POISON, (elem_num - stk->size) * sizeof(elem_num));
    }
    
    stk->memptr = (int *) ((char *) stk->memptr + sizeof(canary_t));

    return 0;
}

ERRORS recalloc_check(stack *stk)
{
    assert(stk);

    if(!(stk->memptr))
    {                                                           //TODO %x printf cast char * пройти по массиву(проверка рекаллока)
        return RECALLOC_NULLPTR;
    }    
    else 
    {
        return OK;
    }
}