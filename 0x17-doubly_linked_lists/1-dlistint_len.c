#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the double linked list
 *
 * Return: the list size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nbr_node = 0;

	while (h != NULL)
	{
		nbr_node++;
		h = h->next;
	}

	return (nbr_node);
}
