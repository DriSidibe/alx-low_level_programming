#include "main.h"
#include <math.h>
#include <ctype.h>

/**
 *print_last_digit - check the code
 *@n: the parameter
 *
 *Return: check the code
 */
int print_last_digit(int n)
{

	int last_digit;

	last_digit = ((abs(n) % 10) * 10) + (abs(n) % 10);

	return (last_digit);
}
