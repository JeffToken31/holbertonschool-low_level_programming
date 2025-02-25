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
	for (n = 0; a[n]; n++)
	{
		if (n == 0)	
		printf("%d", a[n]);
		else
		printf(", %d", a[n]);
	}
	printf("\n");
}
