#include "function_pointers.h"

/**
 * print_name - A function that prints out a name by
 * running a callback on a string.
 *
 * @name: The string the callback would be run on.
 * @f: The callback function.
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
