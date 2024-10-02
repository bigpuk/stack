#include <stdio.h>
#include <assert.h>
#include <mem.h>

#include "my_recalloc.h"

void *my_recalloc(stack *stk, size_t num, size_t elem_size)
{
    assert(stk);
    
    stk->memptr = (int *)realloc(stk->memptr, elem_size);

    if(!stk->memptr)
    {
        printf("ERROR! (my_recalloc)");                         //TODO %x printf cast char * пройти по массиву(проверка рекаллока)
    }

    memset((void *)(stk->memptr + stk->size), 0, num - (stk->size));
    // for(size_t stk_elem = stk->size; stk_elem < num; stk_elem++)
    // {
    //     stk->memptr[stk_elem] = 0;
    // }
}