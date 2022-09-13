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
	if (islower(c) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
