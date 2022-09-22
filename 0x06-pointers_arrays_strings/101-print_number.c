#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 */
void print_number(int n)
{

	int i, first_digit, remain, number_of_digit = floor(log10(n)) + 1;

	for (i = number_of_digit; i > 0; i--)
	{
		remain = n % (int)round(pow((double)10, (double)(i - 1)));
		first_digit = (n - remain) / (int)round(pow((double)10, (double)(i - 1)));
		_putchar('0' + first_digit);
		n -= n - remain;
	}
}
