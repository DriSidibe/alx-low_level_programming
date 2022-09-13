#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_to_98 - check the code
 *@n: the parameter
 *
 *Return: check the code
 */
void print_to_98(int n)
{
	int i;

	for (i = n ; i < 99 ; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
}
