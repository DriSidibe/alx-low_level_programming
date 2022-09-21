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
	int tmp[n];

	strcpy(tmp, a);

	for (i = 0 ; i < n ; i++)
		*(a + i) = tmp[i];
}
