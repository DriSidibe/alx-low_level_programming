#include <stdio.h>
#include <math.h>

/**
 *main -  prints the minimum number of
 * coins to make change for an amount of money.
 *
 *REturn: 0 if success
 */
int main(int argc, char *argv[])
{
	int amount, num_coin = 0;

	if (argc < 1 && argc > 1)
	{
		puts("Error");
		return (1);
	}
	else
	{
		amount = atoi(argv[1]);

		if (amount < 0)
		{
			puts("0");
			puts("\n");
		}
		else
		{
			num_coin += floor(amount/25);
			amount -= floor(amount/25) * 25;
			num_coin += floor(amount/25);
			amount -= floor(amount/25) * 25;
			num_coin += floor(amount/25);
			amount -= floor(amount/25) * 25;
			num_coin += floor(amount/25);
			amount -= floor(amount/25) * 25;
			
		}
	}
}
