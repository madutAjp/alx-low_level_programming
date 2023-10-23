#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head:pointer to a pointer of the head of the list
 * @index:index of the node to be deleted (starting at 0)
 *
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *irene, *ajp;
	unsigned int madut;

	if (head == NULL || *head == NULL)
		return (-1);
	irene = *head;
	if (index == 0)
	{
		*head = irene->next;
		free(irene);
		return (1);
	}
	while (irene != NULL && madut < index)
	{
		ajp = irene;
		irene = irene->next;
		madut++;
	}
	if (irene != NULL)
	{
		ajp->next = irene->next;
		return (1);
	}
	return (-1);
}
