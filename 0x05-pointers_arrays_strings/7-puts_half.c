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

	for (i = round(strlen(str) / 2) ; i < strlen(str) ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');

}
