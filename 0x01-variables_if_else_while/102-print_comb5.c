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
	int d;
	int index = 2;
	int index2 = 1;
	int index3 = 1;

	for (a = 0 ; a <= 9 ; a++)
	{
		index2 = 0;
		for (b = index2 ; b <= 8 ; b++)
		{
			index = 0;
			for (c = index ; c <= 9 ; c++)
			{
				index3 = 1;
				for (d = index3 ; d <= 9 ; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a != 9 || b != 8 | c != 9 || d != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		index2++;
	}

	putchar('\n');

	return (0);

}
