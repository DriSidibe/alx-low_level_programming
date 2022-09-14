#include <stdio.h>

/**
 *main - check the code
 *
 *Return: check the code
 */
int main(void)
{

	double two_back;
	double one_back;
	double sum;
	int i;

	one_back = 2;
	two_back = 1;

	printf("%d, %d", 1, 2);

	for (i = 2 ; i < 98 ; i++)
	{
		sum = one_back + two_back;
		two_back = one_back;

		printf(", %d", sum);

		one_back = sum;
	}
	putchar('\n');

	return (0);
}
