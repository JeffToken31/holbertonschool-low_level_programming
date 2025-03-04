#include "main.h"

/**
 *_sqrt_recursion - return squared root
 *@n: number to find squared root
 *Return: squared root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (_sqrt_root(n, 1));
	}
}

/**
 *_sqrt_root - find squared root
 *@n: number to find squared root
 *@x: squared root
 *Return: squared root
 */

int _sqrt_root(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (_sqrt_root(n, x + 1));
	}

}
