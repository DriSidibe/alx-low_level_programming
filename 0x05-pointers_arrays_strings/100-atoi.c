#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * _atoi - convert a string to an integer.
 * @s: the string to convert
 *
 *Return: return the result
 */
int _atoi(char *s)

{

	int sign = 1;

	unsigned int num = 0;


	do {

		if (*s == '-')

			sign *= -1;


		else if (*s >= '0' && *s <= '9')

			num = (num * 10) + (*s - '0');


		else if (num > 0)

			break;


	} while (*s++);


	return (num * sign);

}
