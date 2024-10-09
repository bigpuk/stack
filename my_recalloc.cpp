#include <stdio.h>
#include <assert.h>
#include <mem.h>

#include "my_recalloc.h"
#include "reccalloc_check.h"

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
}