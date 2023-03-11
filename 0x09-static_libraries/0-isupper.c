#include "main.h"
#include <ctype.h>

/**
 * _isupper - isupper
 * @c: input
 *
 * Description: checks if a letter is uppercase
 * Return: Always 1 if input is uppercase
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}

