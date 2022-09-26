/**
 *_memcpy - fills memory with a constant byte.
 *@src: source memory area
 *@dest: the destination constant
 *@n: the number of bytes
 *
 *Return: the destination dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
