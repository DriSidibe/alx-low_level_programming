#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: the double linked list head
 *
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cursor = head;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	while (cursor != NULL)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}

	return (sum);
}
