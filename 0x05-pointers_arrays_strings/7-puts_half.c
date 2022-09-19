#include <string.h>
#include <math.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string
 */
void puts_half(char *str)
{
	size_t i;
	int j;

	if (strlen(str) % 2 == 0)
	{
		j = (strlen(str) / 2) + 1;
	}
	else
	{
		j = (strlen(str) - 1) / 2;
	}

	for (i = j ; i < strlen(str) ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');

}
