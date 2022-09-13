#include "main.h"

/**
 *print_alphabet_x10 - print alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	for (int i = 0 ; i <= 10 ; i++)
	{
		for (char a = 'a' ; a <= 'z' ; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
