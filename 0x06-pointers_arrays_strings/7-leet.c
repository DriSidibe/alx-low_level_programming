#include <string.h>

/**
 * leet - encodes a string into 1337.
 * @s: the string
 *
 * Return: the result
 */
char *leet(char *s)
{
	int i, j;
	char b[] = "4433007711";
	char a[] = "aAeEoOtTlL";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = b[j];
			}
		}
	}

	return (s);
}
