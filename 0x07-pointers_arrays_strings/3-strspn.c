#include <string.h>

/**
 *_strspn - gets the length of a prefix substring.
 *@s: the string
 *@accept: the list of char
 *
 *Return:  a pointer to the first occurrence
 *of the character c in the string s, or NULL if the character is not found
 */
unsigned int *_strspn(char *s, char *accept)
{
	return ((unsigned int)strspn(s, accept));

}
