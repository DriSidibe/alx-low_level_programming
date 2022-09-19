#include <string.h>
#include <math.h>

/**
 * rev_string - reverses a string.
 * @str: the string
 */
void rev_string(char *str)
{
	int i;
	int j = 0;
	char tmp_str[];

	for (i = strlen(str) - 1 ; i > -1 ; i--)
	{
		tmp_str[j] = *(str + i);
		j++;
	}

	for (i = 0 ; i < strlen(str) ; i++)
	{
		*(str + i) = tmp_str[i];
	}

}
