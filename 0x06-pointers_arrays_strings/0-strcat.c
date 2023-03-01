#include "main.h"
#include <string.h>

/**
  * *_strcat - *_strcat
  * Description - concatenate two strings
  * @src: the string to be appended
  * @dest: the string that src would be appended to
  *
  * Return: empty
  *
  */


char *_strcat(char *dest, char *src)
{
	char *cat = strcat(dest, src);

	return (cat);
}
