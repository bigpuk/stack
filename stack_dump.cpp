#include <stdio.h>
#include <assert.h>
#include <math.h>

#include "stack_dump.h"

int stack_dump(stack *stk, size_t call_line, const char *call_file, const char *stack_name)
{
    assert(stk);
    assert(call_file);
    assert(stack_name);

    if(stack_name[0] == '&')stack_name++;

    printf("\n\n--------STACK INFO--------\n\n");
    printf("Dump called from: %s\nLine:%d\n\n", call_file, call_line);
    printf("Stack name: %s\nStack memory pointer: %p\nStack capacity: %d\nStack size: %d\n\n", stack_name, stk->memptr, stk->capacity, stk->size);
    

    printf("Canary 1: %x\n", (unsigned int)(stk->canary1));
    printf("Canary 2: %x\n", (unsigned int)(stk->canary2));
    printf("Canary 3: %x\n", *(unsigned int *)(stk->canary3));

    for(size_t elem_num = 0; elem_num < stk->capacity; elem_num++)
    {
        printf("Element number [%d]", elem_num);

        if(elem_num) for(double quantity = 0; quantity <= floor(log10(stk->capacity)) - floor(log10(elem_num)); quantity++) printf(" ");
        else for(double quantity = 0; quantity < log10(stk->capacity); quantity++)printf(" ");

        printf("= %d\n", stk->memptr[elem_num]);
    }
    printf("Canary 4: %x\n", *(unsigned int *)(stk->canary4));

    printf("\n");

    printf("--------------------------\n\n");

    return 0;
}