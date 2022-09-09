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
	int c;
	int index = 2;
	int index2 = 1;

	for (a = 0 ; a <= 7 ; a++)
	{
		index = 2 + a;
		index2 = 1 + a;
		for (b = index2 ; b <= 8 ; b++)
		{
			for (c = index ; c <= 9 ; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			index++;
		}
		index2++;
	}

	putchar('\n');

	return (0);

}
