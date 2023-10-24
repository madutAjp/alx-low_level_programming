#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints listint_t linked list
 * @head:pointer to the head of the list
 * Return:number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *hare, *tortoise;

	if (head == NULL)
		return (0);
	tortoise = head;
	hare = head;
	while (hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		hare = hare->next;
		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			exit(98);
		}
		tortoise = tortoise->next;
		count++;
	}
	printf("[%p] %d\n", (void *)tortoise, tortoise->n);
	count++;
	return (count);
}
