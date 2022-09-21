#include <string.h>

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
	int tmp[100];

	for (i = n - 1 ; i >= 0 ; i--)
		tmp[i] = *(a + i);

	for (i = 0 ; i < n ; i++)
		*(a + i) = tmp[i];
}
