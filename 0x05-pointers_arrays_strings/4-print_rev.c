#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @str: the string
 */
void print_rev(char *str)
{
	size_t i;

	for (i = strlen(str) ; i > 0 ; i--)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');

}
