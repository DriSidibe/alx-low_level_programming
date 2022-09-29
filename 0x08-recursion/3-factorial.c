#include "main.h"

/**
 *factorial - return the factorial of a int
 *@n: the number
 *
 *Return: return the factorial
 */
int factorial(int n);
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
