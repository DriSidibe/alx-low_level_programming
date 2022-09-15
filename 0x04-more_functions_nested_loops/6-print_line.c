#include "main.h"
#include <stdlib.h>

/**
 *print_line - check the code
 *@c: the parameter
 *
 *Return: check the code
 */
void print_line(int c)
{

	int i;

	if (c > 0)
	{

		for (i = 0 ; i < c ; i++)
		{
			_putchar('_');
		}

	}
	_putchar('\n');
}
