#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* more headers goes there */


/* betty style doc for function main goes there */
/**
 *main - the main function
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
