#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the double linked list
 *
 * Return: the list size
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr_node = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		nbr_node++;
	}

	return (nbr_node);
}
