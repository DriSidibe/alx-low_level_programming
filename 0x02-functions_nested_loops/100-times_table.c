#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *times_table - check the code
 */
void times_table(void)
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
						printf(",    %d", j * i);
					}
					else if ((j * i) >= 10 && (j * i) < 100)
					{
						printf(",   %d", j * i);
					}
					else
					{
						printf(",  %d", j * i);
					}
				}
			}
			printf("\n");
		}
	}
}
