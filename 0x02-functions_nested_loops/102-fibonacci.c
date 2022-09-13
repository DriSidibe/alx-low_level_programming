#include <stdio.h>

/**
 *main - check the code
 *
 *Return: check the code
 */
int main(void)
{

	int i;

	for (i = 1 ; i <= 50 ; i++)
	{
		if (i == 1)
		{
			printf("1");
		}
		else if (i == 2)
		{
			printf(", 2");
		}
		else
		{
			printf(", %d", i + i - 1 + i - 2);
		}
	}

	return (0);
}
