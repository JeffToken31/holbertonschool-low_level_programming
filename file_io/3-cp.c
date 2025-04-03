#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 *main - copy file to other file
 *@argc: counter of argument
 *@argv: argument
 *Return: 0 if success
 */

int main(int argc, char **argv)
{
	int ffrom, fto;
	char buffer[1024];
	ssize_t byte_read, byte_write;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ffrom = open(argv[1], O_RDONLY);
	if (ffrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((byte_read = read(ffrom, buffer, sizeof(buffer))) > 0)
	{
		byte_write = write(fto, buffer, byte_read);
		if (byte_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(ffrom);
			close(fto);
			exit(99);
		}
	}
	if (byte_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(ffrom);
		close(fto);
		exit(98);
	}
	if (close(fto) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fto %d\n", close(fto));
		exit(100);
	}
	if (close(ffrom) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close ffrom %d\n", close(ffrom));
		exit(100);
	}
	return (0);
}
