#include <math.h>
#include <stdlib.h>

/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: the number
 *
 *Return: the natural square root of n
 */
int _sqrt_recursion(int n)

{

	if (n - floor(sqrt(n)) < 1)
	{
		return (-1);
	}
	return (sqrt(n));

}
