#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: the name of the file
 *@letters: number of letters
 *Return: the size of the input string
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int file, i;
	char str[letters - 1];

	if (filename == NULL)
		return (0);

	file = open(filename, 0_RDONLY);

	if (file == -1)
		return (0);

	read(file, str, letters);

	str[letters] = '\n';

	for(i = 0; i < letters; letters++)
		_putchar(str[i]);

	close(file);

	return ((ssize_t)letters);
}
