#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees listint_t
 * @head:pointer to a the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *madut, *ajp;

	if (head == NULL)
		return;
	madut = *head;
	while (madut != NULL)
	{
		ajp = madut;
		madut = madut->next;
		free(ajp);
	}
	*head = NULL;
}
