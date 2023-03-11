#include "main.h"
#include <ctype.h>

/**
 * _isdigit - isdigit
 * @c: input
 *
 * Description: checks if something is a digit
 * Return: Always 1 if input is a digit
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}

