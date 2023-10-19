#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h:a pointer to the beginning of the list
 * Return:number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int madut = 0;

	if (h == NULL)
		return (0);
	for (madut = 1; h->next != NULL; madut++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (madut);
}
