#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc.
 *@b: the integer
 *Return: the pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(b));

	if (p == NULL)
		EXIT_FAILURE;

	return (p);
}
