#include <stdio.h>

/**
 *main - function
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else if ((num % 3) == 0)
			printf("Fizz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d",num);
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
