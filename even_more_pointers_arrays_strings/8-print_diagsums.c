#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - to compute sum of array element in diagonal
 *@a: char containt array
 *@size: lenght of array
 *Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i, j, k = 0;
	int first = 0;
	int second = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				first += a[k];
			}

			if (i + j == size - 1)
			{
				second += a[k];
			}
			k++;
		}
	}
	printf("%i, %i\n", first, second);
}
