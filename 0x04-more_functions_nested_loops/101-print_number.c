#include "main.h"

/**
 *print_number - check the code
 *@c: the parameter
 */
void print_number(int c)
{

	unsigned int i = c;

	if (c < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
		print_number(i / 10);

	_putchar((i % 10) + '0');
}
