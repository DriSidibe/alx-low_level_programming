#include <math.h>
#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 */
void print_number(int n)
{

	int i;
	int first_digit;
	int remain;
	int r;
	int number_of_digit = floor(log10(n)) + 1;

	for (i = number_of_digit ; i > 0 ; i--)
	{
		r = round(pow(10, (i - 1)));

		remain = n % r;

		first_digit = (n - remain) / r;

		_putchar('0' + first_digit);

		n -= n - remain;
	}
}
