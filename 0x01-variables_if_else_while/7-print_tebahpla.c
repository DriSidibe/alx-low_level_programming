#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 *main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 *Return: 0 is success
 */
int main(void)

{

	char a;

	for (a = 'z'; a >= 'a' ; a--)
		putchar(a);

	putchar('\n');

	return (0);

}
