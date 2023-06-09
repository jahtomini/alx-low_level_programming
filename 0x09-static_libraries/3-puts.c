#include "main.h"
#include <string.h>

/**
  * _puts - _puts
  * Description - print a string to stdout
  * @str: the string being pointed at
  *
  * Return: empty
  *
  */


void _puts(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

