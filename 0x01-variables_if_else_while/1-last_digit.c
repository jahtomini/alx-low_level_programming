#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
* main - Entry point
* description - find the last digit in an int
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int last_digit = 0;
	char post[60];
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* find last digit */
	last_digit = n % 10;
	
	if (last_digit > 5)
		strcpy(post, "and is greater than 5\n");
	else if (last_digit == 0)
		strcpy(post, "and is 0\n");
	else if (last_digit < 6 && last_digit != 0)
		strcpy(post, "and is less than 6 and not 0\n");
	
	printf("Last digit of %i is %i %s\n", n, last_digit, post);
	return (0);
}
