#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all integers in the linked list
 *
 * @h: pointer to the head of the linked list
 *
 * Return: number of integers printed
 *
 */

size_t print_listint(const listint_t *h)
{
	unsigned long count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
