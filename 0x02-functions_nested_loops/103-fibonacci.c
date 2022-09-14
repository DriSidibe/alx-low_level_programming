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
	long int sum_even;
	int i;


	one_back = 2;
	two_back = 1;

	sum_even = 2;

	for (i = 2 ; i < 50 ; i++)
	{
		sum = one_back + two_back;

		if (sum % 2 == 0)
		{
			printf("%d\n", sum);
			sum_even = sum_even + sum;
		}

		two_back = one_back;

		one_back = sum;
	}
	printf("%ld", sum_even);
	putchar('\n');

	return (0);
}
