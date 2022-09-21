#include <string.h>
#include <stdlib.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array
 * @n: lenght of the array.
 *
 * Return: the result
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int tmp;

	for (i = 0 ; i < abs(n / 2) - 1 ; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
		j--;
	}
}
