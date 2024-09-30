#include <stdio.h>

#include "my_recalloc.h"

void my_recalloc(void *memptr, size_t num, size_t size)
{
    void *temp = calloc(num, size);
    
    
}