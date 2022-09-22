#include <math.h>
#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 */
void print_number(int n)
{

	unsigned int u = n;

	if (n < 0)
	{
		_putchar('-');
		u = -u;
	}

	if (u / 10)
		print_number(u / 10);

	_putchar((u % 10) + '0');
}
