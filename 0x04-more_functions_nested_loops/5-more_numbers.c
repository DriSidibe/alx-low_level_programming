#include "main.h"

/**
 *more_numbers - print alphabet in lowercase
 */
void more_numbers(void)
{
	int i;
	int a;

	for (i = 0 ; i < 10 ; i++)
	{
		for (a = 0 ; a <= 14 ; a++)
		{
			_putchar(a + '0');
		}
		_putchar('\n');
	}
}
