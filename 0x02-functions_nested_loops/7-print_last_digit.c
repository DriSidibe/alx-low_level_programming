#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include <time.h>

/* more headers goes there */


/* betty style doc for function main goes there */

/**
 *print_last_digit - check the code
 *
 *Return: a result
 */
int print_last_digit(int);

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

	return atoi(&last_digit);
}
