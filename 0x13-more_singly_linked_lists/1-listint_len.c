#include <stdio.h>
#include "lists.h"

/**
 * listint_len - print the number of integers
 *
 * @h: pointer to the head of the linked list
 *
 * Return: number of integers printed
 *
 */

size_t listint_len(const listint_t *h)
{
	unsigned long count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
