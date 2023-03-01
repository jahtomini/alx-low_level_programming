#include "main.h"
#include <string.h>

/**
  * *_strncat - *_strncat
  * Description - concatenate two strings using at most n bytes from src
  * @src: the string to be appended
  * @dest: the string that src would be appended to
  *
  * @n: number of bytes copied from src 
  * Return: empty
  *
  */


char *_strncat(char *dest, char *src, int n)
{
	char *cat = strncat(dest, src, n);

	return (cat);
}
