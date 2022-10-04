#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenates two strings.
 *@s1: string 1
 *@s2: string 2
 *Return: the first concatanated string
 */

char *str_concat(char *s1, char *s2)
{

	char *p = NULL;

	if (s1 != NULL && s2 != NULL)
	{
		p = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));

		if (p != NULL)
		{
			memcpy(p, s1, strlen(s1));
			memcpy(p + strlen(s1), s2, strlen(s2));
			return (p);
		}
		else
			return (NULL);
	}
	else
	{
		if (s1 == NULL && s2 != NULL)
			return (s2);
		else if (s1 != NULL && s2 == NULL)
			return (s1);
		else
			return (NULL);

	}

	return (NULL);
}
