#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocate a previously allocated section of memory.
 * 
 * @ptr: The pointer to the section of memory.
 * @old_size: The size of the previously allocated section of memory.
 * @new_size: The size the memory section should be extended to.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    if (new_size == old_size)
    {
        return ptr;
    }

    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }
}
