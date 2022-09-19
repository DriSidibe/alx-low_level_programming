#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the string
 */
void puts2(char *str)
{
	size_t i;

	for (i = 0 ; i < strlen(str) ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');

}
