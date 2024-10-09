#ifndef DUMP_H
#define DUMP_H

#include <stdio.h>

#include "common.h"                 //TODO как дамп юзать

int stack_dump(stack *stk);

#define DUMP(arg) do                                    \
{                                                       \
    stack_dump(__LINE__, __LINE__, __LINE__, __LINE__); \
}while(0);                                              \

#endif                                                      //TODO функциоанльные макросы погуглить