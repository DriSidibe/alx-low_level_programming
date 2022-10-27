/**
 *binary_to_uint - converts a binary number to an unsigned int.
 *@b: pointing to a string of 0 and 1 chars
 *
 *Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, index = 0, j, tmp = 1, len;
	unsigned int result;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	index = index - 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' || b[i] != '0')
			return (0);
		else
		{
			for (j = 1; j < index; j++)
				tmp *= 10;
			result += b[i] * tmp;
			tmp = 1;
		}

		index--;
	}

	return (result);
}
