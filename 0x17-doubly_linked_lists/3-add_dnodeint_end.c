#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the double linked list head
 * @n: the int to add
 *
 * Return: the list size
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *added_node = NULL;
	dlistint_t *cursor = *head;
	dlistint_t *last_item = *head;

	added_node = malloc(sizeof(dlistint_t));

	if (added_node == NULL)
		return (NULL);

	while (cursor != NULL)
	{
		last_item = cursor;
		cursor = cursor->next;
	}

	if (*head == NULL)
	{
		added_node->next = NULL;
		added_node->prev = NULL;
		*head = added_node;
		added_node->n = n;
	}
	else
	{
		added_node->next = NULL;
		added_node->prev = last_item;
		last_item->next = added_node;
		added_node->n = n;
	}

	return (added_node);
}
