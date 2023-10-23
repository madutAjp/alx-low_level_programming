#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head:pointer to the head of the list
 * @index:index of the node to return
 *
 * Return:pointer to the node or NULL if the node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ajp = 0;

	while (head != NULL)
	{
		if (ajp == index)
		return (head);
		head = head->next;
		ajp++;
	}
	return (NULL);
}
