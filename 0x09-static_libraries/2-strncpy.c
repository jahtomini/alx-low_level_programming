#include "main.h"

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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

