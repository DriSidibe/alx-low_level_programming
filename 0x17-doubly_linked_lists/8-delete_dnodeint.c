#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list.
 * @head: the double linked list head
 * @index: the index
 *
 * Return: AKG.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = *head;
	dlistint_t *cursor = *head;
	dlistint_t *tmp = *head;
	dlistint_t *queue1 = *head;
	dlistint_t *queue2 = *head;
	unsigned int i = 0;
	unsigned int len = 0;

	while (cursor != NULL)
	{
		queue1 = cursor;
		queue2 = queue1->prev;
		cursor = cursor->next;
		len++;
	}
	if (index >= len)
		return (-1);
	cursor = *head;
	if (index > 0 && index < len - 1)
	{
		while (i != index)
		{
			cursor = cursor->next;
			prev = cursor->prev;
			i++;
		}
		prev->next = cursor->next;
		cursor->next->prev = prev;
		free(cursor);
	}
	else if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		queue2->next = NULL;
		free(queue1);
	}
	return (1);
}
