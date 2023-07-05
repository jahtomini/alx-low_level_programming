#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the node at a particular index
 *
 * @head: address of the pointer to the head of the linked list
 * @index: index of the node being searched for
 *
 * Description: Function that gets the node at a particular index
 *
 * Return: address of the found node or NULL if not existent
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int count = 0;

	node = head;

	while (node && count < index)
	{
		count++;
		node = node->next;
	}

	if (!node)
	{
		return (NULL);
	}

	return (node);
}

