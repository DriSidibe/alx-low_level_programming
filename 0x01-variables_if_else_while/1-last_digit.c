#include <stdio.h>
#include <stdlib.h>

#include <time.h>

/* more headers goes there */


/* betty style doc for function main goes there */
/**
 *main - the main function
 *
 *Return: 0 is success
 */
int main(void)

{

	int n;
	char n_to_string[10];


	srand(time(0));

	n = rand() - RAND_MAX / 2;
	sprintf(n_to_string, "%d", n);

	/* your code goes there */
	if (atoi(n_to_string[-1]) > 5)
	{
		printf("Last digit of %d is and is greater than 5\n", n);
	}
	else if (atoi(n_to_string[-1]) == 0)
	{
		printf("Last digit of %d is and is 0\n", n);
	}
	else if (atoi(n_to_string[-1]) < 6)
	{
		printf("Last digit of %d is and is less than 6 and not 0\n", n);
	}

	return (0);

}
