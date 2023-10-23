#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of listint_t
 * @head:pointer to a pointer to the head of the list
 * @n:integer value to be stored in new node
 *
 * Return:address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ajp = malloc(sizeof(listint_t));
	listint_t *leykun;

	if (ajp == NULL)
	{
		return (NULL);
	}
	ajp->n = n;
	ajp->next = NULL;

	if (*head == NULL)
	{
		*head = ajp;
	}
	else
	{
		leykun = *head;
		while (leykun->next != NULL)
		{
			leykun = leykun->next;
		}
		leykun->next = ajp;
	}
	return (ajp);
}
