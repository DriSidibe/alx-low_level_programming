#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - returns the sum of all its parameters.
 *@n: the number of parameter
 *
 *Return: the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;

	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += (int)var_args(args, double);

	va_end(args);

	return (sum);
}
