#include "main.h"
#include <stdlib.h>

/**
 * set_string - a function that sets the value of a pointer to a char.
 *
 * @s: The char to be replaced
 * @to: The char that replaces s
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
