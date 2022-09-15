#include "main.h"

/**
 *print_square - check the code
 *@size: the parameter
 *
 *Return: check the code
 */
void print_square(int size)
{

	if (size > 0)
	{
		int i;
		int j;

		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
			}
			if (i == size - 1)
			{
				continue;
			}
			_putchar('\n');
		}

	}

	_putchar('\n');
}
