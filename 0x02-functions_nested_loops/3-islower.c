#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include <time.h>

/* more headers goes there */


/* betty style doc for function main goes there */

/**
 *_islower - check the code
 *@c: the parameter
 *
 *Return: a result
 */
int _islower(int c);

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
 *_islower - check the code
 *@c: the parameter
 *
 *Return: check the code
 */
int _islower(int c)
{
	return (islower(c) != 0 ? 1 : 0);
}
