#include <string.h>
#include <math.h>

/**
 * rev_string - reverses a string.
 * @str: the string
 */
void rev_string(char *str)
{
	int i;
	size_t k;
	int j = 0;
	char tmp_str[1000];

	for (i = strlen(str) - 1 ; i > -1 ; i--)
	{
		tmp_str[j] = *(str + i);
		j++;
	}

	for (k = 0 ; k < strlen(str) ; k++)
	{
		*(str + k) = tmp_str[k];
	}

}
