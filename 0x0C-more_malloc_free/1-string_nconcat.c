#include "main.h"
#include <stdlib.h>

/**
 * str_nconcat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * @n: the n first charactere
 * Return: pointer to concat string
 */

char *str_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int i, c, d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	a = malloc((i * sizeof(*s1)) + (n * sizeof(*s2)) + 1);

	if (a == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (i + n + 1); c++)
	{
		if (c < i)
			a[c] = s1[c];

		else
			a[c] = s2[d++];
	}

	return (a);
}
