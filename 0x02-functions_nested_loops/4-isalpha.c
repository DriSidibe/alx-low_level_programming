#include <math.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *_isalpha -  that checks for alphabetic character.
 *@c: the parameter
 *
 *Return: check the code
 */
int _isalpha(int c)
{
	return (isalpha(c) != 0 ? 1 : 0);
}
