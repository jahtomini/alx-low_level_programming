#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - detach the first node in a linked list
 *
 * @head: the head node of the linked list
 *
 * Description: Remove the first node of a linked list
 *
 * Return: the value of that node or 0 if it's NULL
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
