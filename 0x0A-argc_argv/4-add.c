#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers.
 *
 *REturn: 0 if success
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc < 1)
	{
		puts("0");
	}
	else {

		for (i = 1, i <= argc, i++)
		{
			if (atoi(argv[i]) == 0)
			{
				puts("Error");
				return (1);
			}

			sum += atoi(argv[i]);
		}
		printf("%d", sum);

	}
	puts("\n");


	return (0);
}
