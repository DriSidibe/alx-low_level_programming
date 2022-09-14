#include <stdio.h>

/**
 *main - check the code
 *
 *Return: check the code
 */
int main(void)
{

	long int two_back;
	long int one_back;
	long int sum;
	int i;

	printf("%d, %d", 1, 2);

	one_back = 2;
	two_back = 1;

	for (i = 2 ; i < 50 ; i++)
	{
		sum = one_back + two_back;
		printf(", %ld", sum);

		two_back = one_back;

		one_back = sum;
	}
	putchar('\n');

	return (0);
}
