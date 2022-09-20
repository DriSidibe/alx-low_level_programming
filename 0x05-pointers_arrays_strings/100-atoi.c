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
	int first_digit_pos;
	int i, j, k;

	for (i = 0 ; i < (int)strlen(s) ; i++)
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			first_digit_pos = i;
			j = i;
			break;
		}
	}

	for (i = j ; i < (int)strlen(s) ; i++)
	{
		if (!(*(s + i) >= '0' && *(s + i) <= '9'))
		{
			*(s + i) = ' ';
		}
	}


	for (k = 0 ; k < first_digit_pos ; k++)
	{
		for (i = 0 ; i < (int)strlen(s) - 1 ; i++)
		{
			*(s + i) = *(s + i + 1);
		}
	}

	return (atoi(s));
}
