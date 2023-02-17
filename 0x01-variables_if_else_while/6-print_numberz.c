#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* description - print all numbers of base 10
* return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
		putchar(i);

	putchar('\n');

	return (0);
}
