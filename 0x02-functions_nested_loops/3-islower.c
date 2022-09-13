#include "main.h"
#include <stdlib.h>

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
