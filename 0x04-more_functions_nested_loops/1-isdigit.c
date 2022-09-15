#include <math.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *_isdigit - check the code
 *@c: the parameter
 *
 *Return: check the code
 */
int _isdigit(int c)
{
	return (isdigit(c) != 0 ? 1 : 0);
}
