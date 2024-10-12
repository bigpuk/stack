#include <stdio.h>

#include "errors.h"

const char *errors(ERRORS arg)
{
    const char *errors_char[] = {"OK", "Out of memory!", "Stack overflow!", "Stack capacity is zero [prohibited]!","Stack element invalid type", "Stack data is changed!", "Left canary1 in stk is damaged or changed!", "Right canary2 in stk is damaged or changed!","Left canary3 is damaged or changed!", "Right canary4 is damaged or changed!", "Recalloc returned nullptr!", "Stack underflow!"};

    return errors_char[arg];
}