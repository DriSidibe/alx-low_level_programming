#include <string.h>

/**
 *argstostr - concatenates all the arguments of your program.
 *@ac: argument count
 *@av: params
 *Return: the result
 */
char *argstostr(int ac, char **av)
{

	int i, j, k = 0;
	char *p = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	else
	{
		for (i = 1 ; i <= ac ; i++)
		{
			for (j = 0 ; j < strlen(av[i]) ; j++)
			{
				k++;
			}
		}
		p = malloc(sizeof(char) * (k + ac));

		for (i = 1 ; i <= ac ; i++)
		{
			for (j = 0 ; j < strlen(av[i]) ; j++)
			{
				*(p + strlen(p)) = av[i][j];
			}
			*(p + strlen(p)) = '\n';
		}
		return (p);
	}
	return (NULL);

}
