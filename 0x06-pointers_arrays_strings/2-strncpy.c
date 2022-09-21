#include <string.h>

/**
 * _strncpy - copy a string in another.
 * @dest: the destination string
 * @src: the source string.
 * @n: use at most n bytes from src
 * Return: the result
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
