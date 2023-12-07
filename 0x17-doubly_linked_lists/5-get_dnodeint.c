#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t
 * @head:pointer to the head of the list
 * @index:index of the node
 *
 * Return:nth node of the list, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		count++;
		head = head->next;
	}
	if (count == index)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
