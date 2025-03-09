#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - prints a copy of buffer with set numbers
 * @dest: variable to set
 * @src: variable to set dest
 * @n: lenght of dest to return
 * Return: char setting
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
