#include "main.h"

/**
 *is_prime - to check a number x to n
 *@n: number base
 *@x: number to iterate
 *Return: if is prime number
 */

int is_prime(int n, int x)
{
	if (n == x)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, x + 1));
	}

}

/**
 *is_prime_number - return if is prime number
 *@n: number who's checked
 *Return: bool 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, 2));
	}
}
