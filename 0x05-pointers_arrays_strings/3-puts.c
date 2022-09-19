#include <string.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: the string
 */
void _puts(char *str)
{
	size_t i;

	for (i = 0 ; i < strlen(str) ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');

}
