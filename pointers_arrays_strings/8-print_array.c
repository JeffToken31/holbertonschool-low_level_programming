#include "main.h"
#include <stdio.h>

/**
 *print_array - to print all array's elements
 *@a: pointer type int
 *@n: type int
 *Return: no needed
 */
void print_array(int *a, int n)
{
	int last_n;

	last_n = 0;
	for (n = 0; a[n]; n++)
		last_n = n;
	for (n = 0; a[n];)
	{
		if (n != last_n)
			printf("%d, ", a[n]);
		else
			printf("%d\n", a[n]);
		n++;
	}
}
