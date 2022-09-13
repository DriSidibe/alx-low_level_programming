#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include <time.h>

/* more headers goes there */


/* betty style doc for function main goes there */

/**
 *print_sign - check the code
 *@n: the parameter
 *
 *Return: a result
 */
int print_sign(int n);

/**
 *main - the main function
 *
 *Return: 0 is success
 */
int main(void)

{


	/* your code goes there */


	return (0);

}

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
