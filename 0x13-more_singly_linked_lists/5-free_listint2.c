#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a listint_t linked list
 *
 * @head: the head node of the linked list
 *
 * Description: Free a linked list by setting the head to NULL
 *
 * Return: void
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
