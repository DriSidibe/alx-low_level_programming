#include <string.h>
#include <math.h>

/**
 * rev_string - reverses a string.
 * @str: the string
 */
void rev_string(char *str)
{
	int i;

	for (i = 0 ; i < ceil(strlen(str) / 2) - 1 ; i++)
	{
		*(str + strlen(str) - i - 1) = *(str + i);
	}

}
