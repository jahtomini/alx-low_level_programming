#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
    int *ptr;
    int i;

    if (min > max)
    {
        return (NULL);
    }

    ptr = malloc(sizeof (int) * ((max - min) + 1));
    if (ptr == NULL)
    {
        return (NULL);
    }

    for (i = min; i <= max; i++)
    {
        ptr[i] = i;
    }

    return (ptr);

}
