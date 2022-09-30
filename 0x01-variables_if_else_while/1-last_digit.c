#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 *main - assign a random number to the variable n each time it is executed.
 *Complete the source code in order to print the last
 *digit of the number stored in the variable n.
 *
 *Return: 0 is success
 */
int main(void)

{

	int n;
	char n_to_string[10];
	char last_digit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	sprintf(n_to_string, "%d", n);

	/* your code goes there */
	last_digit = n_to_string[strlen(n_to_string) - 1];
	if (atoi(&last_digit) > 5)
	{
		printf("Last digit of %d is %c and is greater than 5\n", n, last_digit);
	}
	else if (atoi(&last_digit) == 0)
	{
		printf("Last digit of %d is %c and is 0\n", n, last_digit);
	}
	else if (atoi(&last_digit) < 6)
	{
		printf("Last digit of %d is %c and is less than 6 and not 0", n, last_digit);
		printf("\n");
	}

	return (0);

}
