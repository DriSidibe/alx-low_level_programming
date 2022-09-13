#include <stdio.h>
#include <stdlib.h>

#include <time.h>

/* more headers goes there */


/* betty style doc for function main goes there */
/**
 *main - the main function
 *
 *Return: 0 is success
 */

void print_alphabet(void);

int main(void)

{


	/* your code goes there */
	print_alphabet();

	return (0);

}

/**
 *print_alphabet - print alphabet in lowercase
 */
void print_alphabet(void)
{
	for (char a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
