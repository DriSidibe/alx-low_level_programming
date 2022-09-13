#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 *print_sign - check the code
 *@n: the parameter
 *
 *Return: check the code
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
