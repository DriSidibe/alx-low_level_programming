#include <stdio.h>

/**
 *main - prints all arguments it receives.
 *
 *REturn: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0, i <= argc, i++)
	{
		puts(argv[i]);
		puts("\n");
	}

	return (0);
}
