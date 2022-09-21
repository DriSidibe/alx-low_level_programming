#include <string.h>
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: the string
 *
 * Return: return the result
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; i < strlen(s) ; i++)
		*(s + i) = toupper(*(s + i));


	return (s);
}
