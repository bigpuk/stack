#ifndef ERRORS_H
#define ERRORS_H

enum ERRORS
{
    OK = 0,
    OUT_OF_MEMORY = 1,
    STACK_OVERFLOW = 2,
    STACK_CAPACITY_0 = 3,
    DATA_CHANGED = 4
};

const char *errors(ERRORS arg);

#endif