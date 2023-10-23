#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of the elements linked listint_t
 * @h:pointer to the head of the list
 *
 * Return:number of nodes (elements) in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t ajp = 0;

	while (h != NULL)
	{
		ajp++;
		h = h->next;
	}
	return (ajp);
}
