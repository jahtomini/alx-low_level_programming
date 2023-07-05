#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a node to the beginning of the linked list
 *
 * @head: address of the pointer to the head of the linked list
 * @n: integer of the prepended node
 *
 * Return: address of the prepended node
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));

	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}

	return (new);
}

