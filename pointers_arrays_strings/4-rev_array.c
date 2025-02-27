#include "main.h"

/**
 *reverse_array - to reverse a array
 *@a: pointer type char
 *@n: type n
 *Return: no needed
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n;
	while (i < j)
	{
		j--;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
	}
}
