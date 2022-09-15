#include "main.h"

/**
 *more_numbers - print alphabet in lowercase
 */
void more_numbers(void)
{
	int i;
	int a;

	for (i = 0 ; i <= 14 ; i++)
	{
		for (a = 48 ; a <= 57 ; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10 ) + '0');
			}
			_putchar((a % 10) + '0'));
		}

		_putchar('\n');
	}
}
