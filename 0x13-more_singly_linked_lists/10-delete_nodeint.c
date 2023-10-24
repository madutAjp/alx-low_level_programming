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
	listint_t *irene = NULL;
	listint_t *madut = *head;
	unsigned int leykun = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(madut);
		return (1);
	}
	while (leykun < index - 1)
	{
		if (!madut || !(madut->next))
			return (-1);
		madut = madut->next;
		leykun++;
	}
	irene = madut->next;
	madut->next = irene->next;
	free(irene);
	return (1);
}
