#include "lists.h"
#include <stdlib.h>

/**
 *listint_len - prints all the elements of a listint_t list.
 *@h: the list
 *
 *Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);

}
