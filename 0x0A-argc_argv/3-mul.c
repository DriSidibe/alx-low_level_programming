#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers.
 *
 *REturn: 0 if success
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 1)
	{
		puts("Error");
	}
	else
	{
		a = atoi(argv[1];
		b = atoi(argv[2];

		printf("%d", a * b);
	}


	return (0);
}
