#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h:a pointer to the beginning of the list
 * Return:number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[%lu] (nil)\n", count);
		else
			printf("[%lu] %s\n", count, current->str);
		current = current->next;
		count++;
	}
	return (count);
}
