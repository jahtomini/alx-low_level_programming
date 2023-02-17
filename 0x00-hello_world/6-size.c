#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - display size of different data types
 *
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %ld byte\n", sizeof(char));
	printf("Size of a int: %ld bytes\n", sizeof(int));
	printf("Size of a long int: %ld bytes\n", sizeof(long int));
	printf("Size of a long long int: %ld bytes\n", sizeof(long long int));
	printf("Size of a float: %ld bytes\n", sizeof(float));

	return (0);
}
