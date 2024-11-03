#ifndef ERRORS_H
#define ERRORS_H

#include <stdio.h>

enum ERRORS
{
    OK = 0,
    OUT_OF_MEMORY = 1,
    STACK_OVERFLOW = 2,
    STACK_CAPACITY_0 = 3,
    STACK_INVALID_TYPE = 4,
    DATA_CHANGED = 5,
    CANARY1_DAMAGED = 6,
    CANARY2_DAMAGED = 7,
    CANARY3_DAMAGED = 8,
    CANARY4_DAMAGED = 9,
    RECALLOC_NULLPTR = 10,
    STACK_UNDERFLOW = 11
};

const char *errors(ERRORS arg);

#define ERRORS_PRINT(arg) do                                                                \
{                                                                                           \
    if(arg)                                                                                 \
    {                                                                                       \
        printf("%s\n(in file:%s ||| line:%d)\n\n", errors(arg), __FILE__, __LINE__);        \
    }                                                                                       \
} while(0)                                                                                  \

#endif