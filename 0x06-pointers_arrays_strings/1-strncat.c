#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest: the destination string
 * @src: the source string.
 * @n: use at most n bytes from src
 * Return: the result
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
