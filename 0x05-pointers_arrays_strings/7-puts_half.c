#include "main.h"
#include <string.h>

/**
  * puts_half - puts_half
  * Description - print half of a string
  * @str: the string being pointed at
  *
  * Return: empty
  *
  */


void puts_half(char *str)
{
	int len = strlen(str);
	int half = len / 2;
	int i;

	for (i = 0; i < len; i++)
	{
		if ((i % 2 == 0))
		{
			if (i > half)
			{
				_putchar(str[i]);
			}
		} else
		{
			if (i > ((len - 1) / 2))
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
