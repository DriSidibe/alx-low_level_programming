#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints all possible different combinations of three digits.
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
