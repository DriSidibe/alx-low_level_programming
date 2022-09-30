#include <stdio.h>

/**
 *main - prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 *
 *Return: check the code
 */
int main(void)
{

	long double two_back;
	long double one_back;
	long double sum;
	int i;

	one_back = 2;
	two_back = 1;

	printf("%d, %d", 1, 2);

	for (i = 2 ; i < 98 ; i++)
	{
		sum = one_back + two_back;
		two_back = one_back;

		printf(", %.0Lf", sum);

		one_back = sum;
	}
	putchar('\n');

	return (0);
}
