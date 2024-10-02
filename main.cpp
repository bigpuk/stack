#include <stdio.h>
#include <stdlib.h>

#include "stack_pop.h"
#include "my_recalloc.h"
#include "stack_ctor.h"
#include "stack_push.h"

int main()
{                               //ctor, pop, push, top
    printf("ded\n");

    int num = 7;

    stack stk = {};

    stack_ctor(&stk);
    stack_push(&stk, num);
    printf("%d", stack_pop(&stk));
}