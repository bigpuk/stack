#include <stdio.h>
#include <stdlib.h>

#include "stack_pop.h"
#include "my_recalloc.h"
#include "stack_ctor.h"
#include "stack_push.h"
#include "stack_destructor.h"
#include "stack_dump.h"
#include "stack_verificator.h"

int main()
{                               
    int num = 7;

    size_t default_capacity = DEFAULT_CAPACITY;             //изменение капасити на что то меньшее

    stack stk = {};

    stack_ctor(&stk, 99);

    stack_verificator(&stk);

    
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);
    stack_push(&stk, num);

    STACK_DUMP(&stk);

    // printf("%d\n", stack_pop(&stk));
    // printf("%d\n", stack_pop(&stk));
    // printf("%d\n", stack_pop(&stk));
    // printf("%d\n", stack_pop(&stk));
    // printf("%d\n", stack_pop(&stk));
    // printf("%d\n", stack_pop(&stk));

    stack_destructor(&stk); 

}