#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *print_times_table - prints the n times table, starting with 0.
 *@n: parameter
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				if (j == 0)
				{
					printf("0");
				}
				else
				{
					if ((j * i) < 10)
					{
						printf(",   %d", j * i);
					}
					else if ((j * i) >= 10 && (j * i) < 100)
					{
						printf(",  %d", j * i);
					}
					else
					{
						printf(", %d", j * i);
					}
				}
			}
			printf("\n");
		}
	}
}
