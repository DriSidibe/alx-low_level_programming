#include <stdio.h>

/**
 *main - prints its name, followed by a new line.
 *@argc: param 1
 *@argv: param 2
 *
 *Return: 0 if success
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
