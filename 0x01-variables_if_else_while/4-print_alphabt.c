#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
* main - Entry point
* description - print the alphabet with putchar
* Return: Always 0 (Success)
*/

int main(void)
{
	char c;
	char d;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' && c != 'e')
			putchar(c);
	return (0);
}
