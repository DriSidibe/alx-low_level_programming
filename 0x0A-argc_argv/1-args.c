#include <stdio.h>

/**
 *main - prints its name, followed by a new line.
 *@argc: param 1
 *@argv: param 2
 *
 *Return: 0 if success
 */
int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
