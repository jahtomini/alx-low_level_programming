#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a listint_t linked list
 *
 * @head: the head node of the linked list
 *
 * Return: void
 *
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

