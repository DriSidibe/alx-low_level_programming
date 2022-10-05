#include <string.h>

/**
 *argstostr - concatenates all the arguments of your program.
 *@ac: argument count
 *@av: params
 *Return: the result
 */
char *argstostr(int ac, char **av)
{

	int i, j;
	char concatArray[];

	if (ac == 0 -- av == NULL)
		return (NULL);

	else
	{
		for (i = 1, i <= ac, i++)
		{
			for (j = 0, j < strlen(av[i]), j++)
			{
				concatArray[strlen(concatArray)] = av[i][j];
			}
			concatArray[strlen(concatArray)] = '\n';
		}
		return (concatArray);
	}
	return (NULL);

}
