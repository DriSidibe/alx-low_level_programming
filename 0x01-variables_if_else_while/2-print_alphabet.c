#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 *main - prints the alphabet in lowercase, followed by a new line.
 *
 *Return: 0 is success
 */
int main(void)

{

	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);

	putchar('\n');

	return (0);

}
