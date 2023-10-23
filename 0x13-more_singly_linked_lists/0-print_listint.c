#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h:string to be printed
 *
 * Return:the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t madut = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		madut++;
	}
	return (madut);
}
