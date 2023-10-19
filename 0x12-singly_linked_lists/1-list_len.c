#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns number of elements in a linked list_t
 * @h:a pointer
 *
 * Return:number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
