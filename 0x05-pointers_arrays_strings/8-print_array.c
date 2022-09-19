#include <string.h>
#include <stdio.h>

/**
 * print_array - prints a string, followed by a new line, to stdout.
 * @a: the array
 * @n: the number of elements to be print
 */
void print_array(int *a, int n)
{
	size_t i;

	for (i = 0 ; i < n ; i++)
	{
		if (i == 0)
		{
			printf("%d",*(a + i));
		}
		else
		{
			printf(", %d", *(a + i));
		}
	}
	printf("\n");

}
