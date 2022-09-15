#include "main.h"

/**
 *print_triangle - check the code
 *@size: the parameter
 *
 *Return: check the code
 */
void print_triangle(int size)
{

	if (size > 0)
	{
		int i;
		int j;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = size - i ; j > 0 ; j--)
			{
				_putchar(' ');
			}
			for (j = 0 ; j < i ; j++)
			{
				_putchar("#");
			}
			if (i == size)
				continue;

			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}
