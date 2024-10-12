#include <stdio.h>
#include <stdlib.h>

#include "stack_pop.h"
#include "my_recalloc.h"
#include "stack_ctor.h"
#include "stack_push.h"
#include "stack_dump.h"

int main()
{                               //ctor, pop, push, top
    int num = 7;

    size_t default_capacity = DEFAULT_CAPACITY;

    stack stk = {};

    stack_ctor(&stk, default_capacity);


    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);

    DUMP(&stk);

    printf("%d\n", stack_pop(&stk));
    printf("%d\n", stack_pop(&stk));
    printf("%d\n", stack_pop(&stk));
    printf("%d\n", stack_pop(&stk));
    printf("%d\n", stack_pop(&stk));
    printf("%d\n", stack_pop(&stk));
    
}