#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 *read_textfile - read and print it to the posix stdout
 *@filename: file to open
 *@letters: numbers of letter to read and print
 *Return: return numbers of letters was operate if error return 0
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	size_t num_byte;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	num_byte = read(file, buffer, letters);
	if (num_byte == 0)
	{
		close(file);
		free(buffer);
		return (0);
	}

	write(STDOUT_FILENO, buffer, num_byte);

	free(buffer);
	close(file);

	return (num_byte);
}
