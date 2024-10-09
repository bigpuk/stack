#include <stdio.h>
#include <assert.h>

#include "common.h"
#include "reccalloc_check.h"
#include "errors.h"

const char * recalloc_check(stack *stk)
{
    assert(stk);

    if(!stk->memptr)
    {
        printf("%s\n", errors(OUT_OF_MEMORY));                         //TODO %x printf cast char * пройти по массиву(проверка рекаллока)
        for(size_t i = 0; i < stk-> size; i++)
        {
            printf("num: %d, elem: %x", i, stk->memptr[i]);        
        }

        return errors(OUT_OF_MEMORY);
    }    
    else 
    {
        printf("%s\n", errors(OK));

        return errors(OK);
    }
}