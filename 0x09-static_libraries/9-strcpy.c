#include "main.h"

/**
 * *_strcpy - *_strcpy
 * Description - Copies a string onto another string (replacing it)
 * @src: the string to be copied
 * @dest: the string that src would be replaced
 *
 * Return: the string being copied onto
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; src[i] == '\0'; i++)
		dest[i] = '\0';

	return (dest);
}
