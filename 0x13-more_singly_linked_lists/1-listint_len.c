#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *listint_len - prints all the elements of a listint_t list.
 *@h: the list
 *
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;

	while(h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);

}
