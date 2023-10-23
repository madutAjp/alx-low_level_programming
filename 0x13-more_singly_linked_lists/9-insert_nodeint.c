#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a give position
 * @idx:index at which the new node should be inserted
 * @head:ponter to a the head of the list
 * @n:integer value to be stored in new node
 * Return:address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int leykun = 0;
	listint_t *madut, *irene, *ajp;

	if (head == NULL)
		return (NULL);

	madut = malloc(sizeof(listint_t));
	if (madut == NULL)
		return (NULL);
	madut->n = n;

	if (idx == 0)
	{
		madut->next = *head;
		*head = madut;
		return (madut);
	}
	irene = *head;
	ajp = NULL;
	while (irene != NULL && leykun < idx)
	{
		ajp = irene;
		irene = irene->next;
		leykun++;
	}
	if (leykun == idx)
	{
		ajp->next = madut;
		madut->next = irene;
		return (madut);
	}
	else
	{
		free(madut);
		return (NULL);
	}
}
