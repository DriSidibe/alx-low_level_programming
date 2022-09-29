/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: the number
 *
 *Return: the natural square root of n
 */
int is_sqrt(int g, int r)
{
	if (g * g == r)
		return (g);
	if (g * g < r)
		return (is_sqrt(++g, r));
	else
		return (-1);
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *
 *@n: numbert to test
 *
 *Return: square root of number n
 */
int _sqrt_recursion(int n)
{
	if (n != 0)
		return (is_sqrt(0, n));
	else
		return (0);
}
