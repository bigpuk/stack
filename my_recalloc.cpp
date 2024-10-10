#include <stdio.h>
#include <assert.h>
#include <mem.h>

#include "my_recalloc.h"
#include "errors.h"

ERRORS recalloc_check(stack *stk);

void *my_recalloc(stack *stk, size_t num, size_t elem_size)
{
    assert(stk);
    
    stk->memptr = (int *)realloc(stk->memptr, elem_size);

    recalloc_check(stk);

    memset((void *)(stk->memptr + stk->size), POISON, num - (stk->size));
    // for(size_t stk_elem = stk->size; stk_elem < num; stk_elem++)
    // {
    //     stk->memptr[stk_elem] = 0;
    // }

    return 0;
}

ERRORS recalloc_check(stack *stk)
{
    assert(stk);

    if(!stk->memptr)
    {
        printf("%s\n", errors(OUT_OF_MEMORY));                         //TODO %x printf cast char * пройти по массиву(проверка рекаллока)
        for(size_t i = 0; i < stk->size; i++)
        {
            printf("num: %d, elem: %x", i, stk->memptr[i]);        
        }

        return OUT_OF_MEMORY;
    }    
    else 
    {
        printf("%s\n", errors(OK));

        return OK;
    }
}