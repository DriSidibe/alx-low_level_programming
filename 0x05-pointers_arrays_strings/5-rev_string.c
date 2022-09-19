#include <string.h>
#include <stdlib.h>

/**
 * rev_string - reverses a string.
 * @str: the string
 */
void rev_string(char *str)
{
	int i;

	for (i = 0 ; i < abs(strlen(str) / 2) - 1 ; i++)
	{
		*(str + strlen(str) - i - 1) = *(str + i);
	}

}
