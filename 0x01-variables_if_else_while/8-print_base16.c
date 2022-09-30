#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 *main - prints all the numbers of base 16 in lowercase, followed by a new line.
 *
 *Return: 0 is success
 */
int main(void)

{

	int a;
	char b;

	for (a = '0'; a <= '9' ; a++)
		putchar(a);
	for (b = 'a' ; b <= 'f' ; b++)
		putchar(b);

	putchar('\n');

	return (0);

}
