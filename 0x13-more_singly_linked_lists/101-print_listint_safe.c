#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listp - free a linked list
 * @head:head ofa list
 * Return:no return
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
	}
	*head = NULL;
}
/**
 * print_listint_safe - prints listint_t linked list
 * @head:pointer to the head of the list
 * Return:number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t dut = 0;
	listp_t *hey, *neto, *madut;

	hey = NULL;
	while (head != NULL)
	{
		neto = malloc(sizeof(listp_t));
		if (neto == NULL)
			exit(98);
		neto->p = (void *)head;
		neto->next = hey;
		hey = neto;

		madut = hey;
		while (madut->next != NULL)
		{
			madut = madut->next;
			if (head == madut->p)
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free_listp(&hey);
				return (dut);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		dut++;
	}
	free_listp(&hey);
	return (dut);
}
