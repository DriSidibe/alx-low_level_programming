#include <stdlib.h>

/**
 *_memcpy - fills memory with a constant byte.
 *@dest: destination memory area
 *@src: soure memory area
 *@n: the number of bytes
 *
 *Return: the destination dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));

}
