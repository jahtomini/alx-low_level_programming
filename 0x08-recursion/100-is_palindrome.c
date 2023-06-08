#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome or not.
 * @s: The string to be checked.
 *
 * Return: 1 if it's a palindrome and 0 if it's not.
 *
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (*s)
	{
		return (_compare_opposite_chars(s, 0, len - 1));
	}

	return (0);
}

/**
 * _compare_opposite_chars - Recursively compare a character with the
 * character end characters away in the string.
 *
 * @s: The string.
 * @start: The position of the first character.
 * @end: The position of the opposite character.
 *
 * Return: 1 if all opposing characters are equal, else 0.
 */

int _compare_opposite_chars(char *s, int start, int end)
{

	if (start >= end)
	{
		return (1);
	}

	if (s[start] == s[end])
	{
		return (_compare_opposite_chars(s, start + 1, end - 1));
	}

	return (0);
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	if (*s)
	{
		return (1 + _strlen(s + 1));
	}

	return (0);
}
