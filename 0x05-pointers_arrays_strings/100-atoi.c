#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - convert a string to an integer.
 * @s: the string to convert
 *
 *Return: return the result
 */
int _atoi(char *s)
{
	int i, digit_found = 1;

	for (i = 0 ; i < (int)strlen(s) ; i++)
	{
		if ((*(s + i) >= '0' && *(s + i) <= '9') || (*(s + i) == '-' && *(s + i + 1) >= '0' && *(s + i + 1) <= '9'))
		{
			if (digit_found == 0)
				*(s + i) = ' ';
		}
		else
		{
			digit_found = 0;
			*(s + i) = ' ';
		}
	}

	if (*s == ' ')
		return (0);
	else
		return (atoi(s));
}
