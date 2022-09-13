#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 *print_last_digit - check the code
 *@n: the parameter
 *
 *Return: check the code
 */
int print_last_digit(int n)
{
	char n_to_string[10];
        char last_digit;

	sprintf(n_to_string, "%d", n);


	last_digit = n_to_string[strlen(n_to_string) - 1];

	return (atoi(&last_digit));
}
