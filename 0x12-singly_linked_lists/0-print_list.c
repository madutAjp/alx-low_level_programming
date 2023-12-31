#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list - Prints all the elements of a list_t.
 * @h: A pointer to the beginning of the list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t madut = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		madut++;
	}
	return (madut);
}

