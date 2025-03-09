#include "main.h"

/**
 *swap_int - to modifie value of variable with pointer
 *@a: pointer type int
 *@b: pointer type int
 *Return: no needed
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
