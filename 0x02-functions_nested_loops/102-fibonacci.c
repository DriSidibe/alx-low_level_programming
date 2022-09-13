#include <stdio.h>


/**
 *fibo - check the code
 *
 *Return: check the code
 */
int fibo(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (2);
	}
	else
	{
		return (fibo(n - 1) + fibo(n - 2));
	}
}

/**
 *main - check the code
 *
 *Return: check the code
 */
int main(void)
{

	printf("%d", fibo(50));

	return (0);
}
