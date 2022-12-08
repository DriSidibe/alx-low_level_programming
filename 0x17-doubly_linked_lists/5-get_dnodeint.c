#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the double linked list head
 * @index: the index
 *
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cursor = head;
	unsigned int i = 0;
	unsigned int len = 0;

	while (cursor != NULL)
	{
		cursor = cursor->next;
		len++;
	}

	if (index >= len)
		return (NULL);

	cursor = head;

	while (i != index)
	{
		cursor = cursor->next;
		i++;
	}
	return (cursor);
}
