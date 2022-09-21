#include <string.h>

/**
 * cap_string - capitalizes all words of a string.
 * @s the string
 *
 * Return: the result
 */
char *cap_string(char *s)
{
	int i, nbr_letter = 0, cmp = 0;
	int first_letter = 0

	for (i = 0 ; i < strlen(s) ; i++)
	{
		switch ((s + i))
		{
			case '\n':
			case '\t':
			case ' ':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				cmp++;
				break;
			default:
				cmp = 0;
				break;
		}

		if (cmp = 1)
		{
			*(s + i) = upper(*(s + i));
		}

	}

	return (s);
}
