#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts new node at index in dlistint_t
 * @h: Pointer to the head of the list
 * @idx: Index at which to insert the new node
 * @n: Integer to be added
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current_node = *h;
	unsigned int m;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	for (m = 0; m < idx - 1; m++)
	{
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current_node = current_node->next;
	}
	new_node->next = current_node->next;
	new_node->prev = current_node;
	if (current_node->next != NULL)
	{
		current_node->next->prev = new_node;
	}
	current_node->next = new_node;
	return (new_node);
}
