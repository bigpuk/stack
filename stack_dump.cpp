#include <stdio.h>
#include <assert.h>

#include "stack_dump.h"

int stack_dump(stack *stk)
{
    assert(stk);

    printf("-------STACK INFO-------");                 //TODO где имя указывать
    printf("Stack name: %s\nStack memory pointer: %p\nStack capacity: %d\nStack size: %d\n", stk->name, stk->memptr, stk->capacity, stk->size);

    return 0;
}