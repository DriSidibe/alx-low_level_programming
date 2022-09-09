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
	int code_q = 'q';
	int code_e = 'e';

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a != code_q && a != code_e)
		{
			putchar(a);
		}
	}
	putchar('\n');

	return (0);

}
