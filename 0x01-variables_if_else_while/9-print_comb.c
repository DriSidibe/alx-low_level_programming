#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 *main - prints all possible combinations of single-digit numbers.
 *
 *Return: 0 is success
 */
int main(void)

{

	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);

}
