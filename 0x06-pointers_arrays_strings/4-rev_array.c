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
	int j = n;
	int tmp;

	for (i = 0 ; i < abs((int)(strlen(a) / 2)) - 1 ; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
		j--;
	}
}
