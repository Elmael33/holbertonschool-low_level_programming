#include "main.h"
#include <stdio.h>
/**
 * factorial - return the factorial of a number
 * @n: integer
 * Return: (always) succes
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
