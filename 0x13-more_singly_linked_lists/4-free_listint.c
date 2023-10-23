#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head:pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *madut;

	while (head != NULL)
	{
		madut = head;
		head = head->next;
		free(madut);
	}
}
