#include "main.h"

/**
 *print_triangle - check the code
 *@c: the parameter
 *
 *Return: check the code
 */
void print_triangle(int c)
{

	if (c > 0)
	{
		int i;
		int j;

		for (i = 0 ; i < c ; i++)
		{
			for (j = 9 ; j >= i ; j--)
			{
				_putchar(' ');
			}
			for (j = 0 ; j <= i ; j++)
			{
				_putchar("#");
			}
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
