#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the double linked list head
 * @idx: the index
 * @n: the data
 *
 * Return: inserts a new node at a given position.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev = *h;
	dlistint_t *new = NULL;
	dlistint_t *cursor = *h;
	unsigned int i = 0;
	unsigned int len = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (cursor != NULL)
	{
		cursor = cursor->next;
		len++;
	}
	if (idx >= len)
		return (NULL);
	cursor = *h;
	if (idx != 0)
	{
		while (i != idx)
		{
			cursor = cursor->next;
			prev = cursor->prev;
			i++;
		}
		prev->next = new;
		new->next = cursor;
		new->prev = prev;
		cursor->prev = new;
		new->n = n;
	}
	else
	{
		new->next = *h;
		new->n = n;
		(*h)->prev = new;
		*h = new;
	}
	return (new);
}
