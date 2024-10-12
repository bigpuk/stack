#ifndef DUMP_H
#define DUMP_H

#include <stdio.h>

#include "common.h"

int stack_dump(stack *stk, size_t call_line, const char *call_file, const char *stack_name);

#define DUMP(arg) do                            \
{                                               \
    stack_dump(arg, __LINE__, __FILE__, #arg);  \
} while(0)                                      \

#endif