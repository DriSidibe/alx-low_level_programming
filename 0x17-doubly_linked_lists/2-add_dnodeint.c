#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the double linked list head
 * @n: the int to add
 *
 * Return: the list size
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added_node = NULL;

	added_node = malloc(sizeof(dlistint_t));

	if (added_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		added_node->next = NULL;
		added_node->prev = NULL;
		added_node->n = n;
	}
	else
	{
		added_node->next = *head;
		added_node->prev = NULL;
		added_node->n = n;
		(*head)->prev = added_node;
	}

	*head = added_node;

	return (*head);
}
