#include "main.h"
#include <math.h>
int is_prime(int n, int r);
/**
 * prime_number - seconde fonction to check for prime number
 * @n: int
 * @r: int
 * Return: (always) succes
 */
int prime_number(int n, int a)
{
	if (a >= n && n > 1)
		return (1);
	else if (n % a == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (prime_number(n, a + 1));
}

/**
 * is_prime_number - check for prime number
 * @n: int
 * Return: (alwayss) succes
 */
int is_prime_number(int n)
{
	return (prime_number(n, 2));
}
