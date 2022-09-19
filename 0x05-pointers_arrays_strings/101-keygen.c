#include <stdlib.h>
#include <time.h>


/**
 *generator -  generates random valid passwords for the program 101-crackme.
 *@len: the lenght of the random password
 *
 *Return: the random password
 */
char * generator(char *s, int len)
{

	char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < len; ++i)
	{
		s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
	}

	return s;
}


/**
 *main - the main function.
 *
 *Return: the return code
 */
int main(void)
{
	char s[20];

	srand(time(NULL));

	generator(s, 15);

	return 0;
}
