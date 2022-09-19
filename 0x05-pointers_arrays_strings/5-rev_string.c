#include <string.h>

/**
 * rev_string - reverses a string.
 * @str: the string
 */
void rev_string(char *str)
{
	int i;
	char tmp_str[strlen(str)];

	for (i = strlen(str) - 1 ; i > -1 ; i--)
	{
		tmp_str[i] = *(str + i);
	}


	for (i = 0 ; i < strlen(str) ; i++)
	{
		*(str + i) = tmp_str[i];
	}
	_putchar('\n');

}
