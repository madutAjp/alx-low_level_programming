#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - calculate number of nodes
 * @head:pointer to the head of the list to check
 * Return:0 if list is not looped or number of nodes in list
 */
size_t looped_listint_len(const listint_t *head)
{

	const listint_t *madut, *ajp;
	size_t obed = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	madut = head->next;
	ajp = (head->next)->next;
	while (ajp)
	{
		if (madut == ajp)
		{
			madut = head;
			while (madut != ajp)
			{
				obed++;
				madut = madut->next;
				ajp = ajp->next;
			}
			madut = madut->next;
			while (madut != ajp)
			{
				obed++;
				madut = madut->next;
			}
			return (obed);
		}
		madut = madut->next;
		ajp = (ajp->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a listint_t linked list
 * @head:pointer to the head of the list
 * Return:number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t irene, leykun = 0;

	irene = looped_listint_len(head);
	if (irene == 0)
	{
		for (; head != NULL; irene++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (leykun = 0; leykun < irene; leykun++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (irene);
}
