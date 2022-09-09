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

	char a;
	int code_9 = '9';

	for (a = '0'; a <= '9' ; a++)
	{
		putchar(a);
		if (a != code_9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);

}
