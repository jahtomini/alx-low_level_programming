#include "main.h"
#include <string.h>

/**
  * *_strncat - concatenate two strings using at most n bytes from src
  * @src: the string to be appended
  * @dest: the string that src would be appended to
  * @n: number of bytes copied from src
  * Return: the concatenated string
  *
  */


char *_strncat(char *dest, char *src, int n)
{
	char *cat = strncat(dest, src, n);

	return (cat);
}

