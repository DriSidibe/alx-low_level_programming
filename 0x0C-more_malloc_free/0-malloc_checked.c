#include <stdio.h>

/**
 *malloc_checked - allocates memory using malloc.
 *@b: the integer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(b));

	if (p == NULL)
		exit(98);

	return (p);
}
