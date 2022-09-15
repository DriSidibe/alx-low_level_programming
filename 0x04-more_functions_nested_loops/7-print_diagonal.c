#include "main.h"
#include <stdlib.h>

/**
 *print_diagonal - check the code
 *@c: the parameter
 *
 *Return: check the code
 */
void print_diagonal(int c)
{

	if (c > 0)
	{
		int i;
		int j;

		for (i = 0 ; i < c ; i++)
		{
			for (j = 0 ; j < i ; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (i == c - 1)
			{
				continue;
			}

			_putchar('\n');
		}

	}
	_putchar('\n');
}
