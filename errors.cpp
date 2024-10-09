#include <stdio.h>

#include "errors.h"

const char *errors(ERRORS arg)
{
    const char *errors_char[] = {"OK", "Out of memory!", "Stack overflow!"};

    return errors_char[arg];
}