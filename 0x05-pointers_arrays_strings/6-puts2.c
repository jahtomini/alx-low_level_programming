#include "main.h"
#include <string.h>

/**
  * puts2 - puts2
  * Description - print every other char in a string
  * @str: the string being pointed at
  *
  * Return: empty
  *
  */


void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
