#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the double linked list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor = head;
	dlistint_t *free_item = head;

	while (cursor != NULL)
	{
		cursor = free_item->next;
		free(free_item);
		free_item = cursor;
	}
	free(cursor);
	free(free_item);
}
