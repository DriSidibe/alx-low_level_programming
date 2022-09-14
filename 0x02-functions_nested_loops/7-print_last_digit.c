#include "main.h"
#include "6-abs.c"

/**
 *print_last_digit - check the code
 *@n: the parameter
 *
 *Return: check the code
 */
int print_last_digit(int n)
{

	int last_digit;

	last_digit = n % 10;

	return (_abs(last_digit * 10 + last_digit));
}
