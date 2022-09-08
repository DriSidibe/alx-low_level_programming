#include <stdio.h>

/**
 *main - the main function
 *
 *Return: 0 if the program was runnig successfuly
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n",sizeof(char));
	printf("Size of an int: %ld byte(s)\n",sizeof(int));
	printf("Size of a long int: %ld byte(s)\n",sizeof(int));
	printf("Size of a long long int: %ld byte(s)\n",sizeof(double));
	printf("Size of float: %ld byte(s)",sizeof(float));
	return (0);
}