#include <stdio.h>
#include <assert.h>

#include "stack_dump.h"

int stack_dump(stack *stk, size_t call_line, const char *call_file, const char *stack_name)
{
    assert(stk);
    assert(call_file);
    assert(stack_name);

    stack_name++;

    printf("\n\n--------STACK INFO--------\n\n");
    printf("Dump called from: %s\nLine:%d\n\n", call_file, call_line);
    printf("Stack name: %s\nStack memory pointer: %p\nStack capacity: %d\nStack size: %d\n\n", stack_name, stk->memptr, stk->capacity, stk->size);
    
    for(size_t elem_num = 0; elem_num < stk->capacity; elem_num++)
    {
        if(elem_num < 10) printf("Element number [%d]  = %d\n", elem_num, stk->memptr[elem_num]);    // TODO   
        else printf("Element number [%d] = %d\n", elem_num, stk->memptr[elem_num]);
    }

    printf("\n");

    printf("--------------------------\n\n");

    return 0;
}