#include <string.h>

/**
 * leet - encodes a string into 1337.
 * @s the string
 *
 * Return: the result
 */
char *leet(char *s)
{
	int i;

	for (i = 0 ; i < strlen(s) ; i++)
	{
		if (*(s + i) == 'a' || *(s + i) == 'A')
		{
			*(s + i) = '4';
		}
		if (*(s + i) == 'e' || *(s + i) == 'E')
		{
			*(s + i) = '3';
		}
		if (*(s + i) == 'o' || *(s + i) == 'O')
		{
			*(s + i) = '0';
		}
		if (*(s + i) == 't' || *(s + i) == 'T')
		{
			*(s + i) = '7';
		}
		if (*(s + i) == 'l' || *(s + i) == 'L')
		{
			*(s + i) = '1';
		}
	}

	return (s);
}
