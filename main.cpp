#include <stdio.h>
#include <stdlib.h>

#include "stack_pop.h"
#include "my_recalloc.h"
#include "stack_ctor.h"
#include "stack_push.h"

int main()
{                               //ctor, pop, push, top
    int num = 7;

    size_t default_capacity = 16;

    stack stk = {};

    stack_ctor(&stk, default_capacity);
    stack_push(&stk, num);
    printf("%d", stack_pop(&stk));
}