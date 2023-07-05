#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of the linked list
 *
 * @head: address of the pointer to the head of the linked list
 * @n: integer of the node to be appended
 *
 * Description: Function that appends a node to a linked list
 *
 * Return: address of the appended node
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *current_node = NULL;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else if (*head != NULL)
	{
		current_node = &(**head);

		while (current_node)
		{
			if (current_node->next != NULL)
			{
				current_node = current_node->next;
			} else
			{
				current_node->next = new;
				current_node = NULL;
			}
		}
	}

	return (new);
}

