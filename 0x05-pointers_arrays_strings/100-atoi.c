#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * _atoi - convert a string to an integer.
 * @s: the string to convert
 *
 *Return: return the result
 */
int _atoi(char *s)
{
	int i, j = 0;
	bool a = false;

	for (i = 0 ; i < (int)strlen(s) ; i++)
	{
		if ((*(s + i) >= '0' && *(s + i) <= '9'))
		{
			a = true;
			if (a)
				j = 1;
			if (!a)
				*(s + i) = ' ';
			if (j == 1)
				*(s + i) = ' ';
		}
		else if ((*(s + i) == '-' && *(s + i + 1) >= '0' && *(s + i + 1) <= '9'))
		{
			a = true;
			if (a)
				j = 1;
			if (!a)
				*(s + i) = ' ';
			if (j == 1)
				*(s + i) = ' ';

		}
		else
		{
			a = false;
			*(s + i) = ' ';
		}
	}

	if (*s == ' ')
		return (0);
	else
		return (atoi(s));
}
