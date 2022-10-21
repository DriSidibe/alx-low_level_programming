#include "main.h"

/**
 * _strlen - calculates the lengthof a string
 * @str: pointer to the str
 *
 * Return: length of a string
 */
int _strlen(const char *str)
{
	int i;

	i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
 * add_node_end - add node at the end of a list
 * @head: head of the list
 * @str: string
 *
 * Return: linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;


	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	new_node->len = _strlen(str);

	new_node->next = NULL;


	if (*head == NULL)
	{
		*head = new_node;

		return (new_node);
	}

	else

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
