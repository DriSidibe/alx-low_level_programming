#include <stdio.h>
#include <stdlib.h>

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
	int b;
	int index = 1;

	for (a = 0 ; a <= 8 ; a++)
	{
		for (b = index ; b <= 9 ; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		index++;
	}

	putchar('\n');

	return (0);

}
