#include <string.h>
#include <math.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string
 */
void puts_half(char *str)
{
	size_t i;

	if (strlen(str) % 2 == 0)
	{
		j = round(strlen(str) / 2);
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
