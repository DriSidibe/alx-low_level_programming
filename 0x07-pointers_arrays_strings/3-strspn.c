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
	int i, j, len = 0, in = 0;

	for (i = 0; i < strlen(s), i++)
	{
		for  (j = 0, j < strlen(accept), j++)
		{
			if (in != 1)
			{
				if (s[i] == accept[j])
				{
					in  = 1;
					len++;
					break;
				}
			}
		}
	}
	return (len);
}
