#include <string.h>

/**
 * rev_string - reverses a string.
 * @str: the string
 */
void rev_string(char *str)
{
	size_t i;
	int str_len = strlen(str);
	char tmp_str[str_len];

	for (i = strlen(str) - 1 ; i > -1 ; i--)
	{
		tmp_str[str_len - i - 1] = *(str + i);
	}


	for (i = 0 ; i < strlen(str) ; i++)
	{
		*(str + i) = tmp_str[i];
	}
	_putchar('\n');

}
