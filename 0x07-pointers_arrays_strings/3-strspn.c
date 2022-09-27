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
	int i;
	int j;
	int n = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				if y(n == i)
					n++;
			}
		}
	}
	return (n);
}
