#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head:pointer to a pointer to the head of the list
 *
 * Return:data (n) of deleted head node or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int irene = 0;
	listint_t *ajp;

	if (head != NULL && *head != NULL)
	{
		ajp = *head;
		irene = ajp->n;
		*head = ajp->next;
		free(ajp);
	}
	return (irene);

}
