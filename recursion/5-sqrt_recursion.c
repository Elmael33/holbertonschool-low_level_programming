#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion - calculate returns the natural square root of a number
 * @n: int
 * Return: (always) succes
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	{
		return (square_root(n, 1));
	}
}
/**
 * square_root - calculate natural square root.
 * @n: int
 * @a: int
 * Return: (always) succes
 */
int square_root(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a < n)
	{
		return (square_root(n, a + 1));
	}
	return (-1);
}
