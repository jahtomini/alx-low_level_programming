#include "main.h"
#include <string.h>

/**
  * *_strncpy - *_strncpy
  * Description - Copies a string onto another string (replacing it)
  * @src: the string to be copied
  * @dest: the string that src would be replaced
  *
  * @n: number of bytes copied from src
  * Return: the string being copied onto
  *
  */


char *_strncpy(char *dest, char *src, int n)
{
	char *i;

	i = strncpy(dest, src, n);

	return (dest);
}
