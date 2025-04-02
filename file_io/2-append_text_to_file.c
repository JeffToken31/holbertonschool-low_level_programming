#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 *append_text_to_file - create a file in read and write and fullfill a text
 *@filename: file manipulated
 *@text_content: text to fullfill at end in file
 *Return: 1 on sucess -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	size_t i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		if (filename == NULL/*check permission*/)
			return (-1);
		else
			return (1);
	}

	file = open(filename, O_RDWR | O_APPEND, 0600);
	if (file == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
	;

	write(file, text_content, i);
	close(file);

	return (1);
}
