#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 *main - prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 *Return: 0 is success
 */
int main(void)

{

	char a;

	for (a = '0'; a <= '9' ; a++)
		putchar(a);

	putchar('\n');

	return (0);

}
