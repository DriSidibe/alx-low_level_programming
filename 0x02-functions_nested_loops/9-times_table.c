#include "main.h"
#include <ctype.h>

/**
 *times_table - check the code
 */
void times_table()
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (j != 9)
			{
				printf("%d, ", i * j);
			}
			else
			{
				printf("%d", i * j);
			}
		}
		printf("\n");
	}
}
