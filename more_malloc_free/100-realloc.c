#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 **_realloc - to realloc memory size at the desired size
 *@ptr: pointer of string
 *@old_size: size of old string
 *@new_size: new size to allocate
 *Return: just modify buffer size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	char *old_ptr;
	unsigned int i;

	old_ptr = ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}

	s = malloc(new_size);
	free(ptr);

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			s[i] = old_ptr[i];
		s[i] = '\0';
		return (s);
	}
	return (s);
}
