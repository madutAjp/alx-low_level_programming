#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head:pointer to the pointer of the head of the list
 *
 * Return:pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *irene = *head;
	listint_t *prev = NULL;
	listint_t *next;

	while (irene != NULL)
	{
		next = irene->next;
		irene->next = prev;
		prev = irene;
		irene = next;
	}
	*head = prev;
	return (*head);
}
