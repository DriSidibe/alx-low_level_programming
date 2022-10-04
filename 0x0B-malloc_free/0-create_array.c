#include <stdlib.h>

/**
 *create_array - creates an array of chars, and initializes it with a specific char.
 *@size: buffer size
 *@c: char to fill
 *Return: the first buffer
 */

char *create_array(unsigned int size, char c)
{

	int i;
	char *p = malloc(sizeof(char) * size);

	for (i = 0 ; i < size ; i++)
	{
		*(p + i) = c;
	}

	return (p);

}
