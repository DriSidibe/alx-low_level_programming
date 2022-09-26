


/**
 *_memset - fills memory with a constant byte.
 *@s: pointer of memory area
 *@b: filling constant
 *@n: the first n bytes
 *
 *Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
