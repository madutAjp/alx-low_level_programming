#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees listint_t list
 * @h:pointer to the head of the list
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *irene;
	listint_t *ajp;
	size_t madut = 0;

	irene = *h;
	while (irene != NULL)
	{
		ajp = irene;
		irene = irene->next;
		free(ajp);
		madut++;
		if (ajp == *h)
		{
			*h = NULL;
			break;
		}
	}
	return (madut);
}
