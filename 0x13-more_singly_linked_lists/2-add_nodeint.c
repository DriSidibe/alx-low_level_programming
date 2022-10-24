#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_nodeint - adds a new node at the beginning of a listint_t list
 *@head: the head of the list
 *@n: the node to insert
 *
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t new_node = NULL;

	new_node = malloc(sizeof(new_node));

	if(new_node == NULL)
		return (NULL);

	new_node->n = n;

	head = new_node;

	return (head);
}
