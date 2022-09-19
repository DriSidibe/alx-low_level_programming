#include <stdlib.h>
#include <time.h>


/**
 *main - the main function.
 *
 *Return: the return code
 */
int main(void)
{
	char s[20];
	char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int i;
	int len = 15;

	srand(time(NULL));

	for (i = 0; i < len; ++i)
	{
		s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
	}

	printf("%s", s);


	return 0;
}
