#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t
 * @head:pointer to a pointer of the head of the list
 * @n:integer value to be stored in new node
 * Return: address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *madut = malloc(sizeof(listint_t));

	if (madut == NULL)
	{
		return (NULL);
	}
	madut->n = n;
	madut->next = *head;
	*head = madut;

	return (madut);
}
