#include "main.h"
#include <stdlib.h>

/**
 *print_square - check the code
 *@c: the parameter
 *
 *Return: check the code
 */
void print_square(int c)
{

	if (c > 0)
	{
		int i;
		int j;

		for (i = 0 ; i < c ; i++)
		{
			for (j = 0 ; j < c ; j++)
			{
				_putchar('#');
			}
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
