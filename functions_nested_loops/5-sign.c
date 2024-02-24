#include "main.h"
#include <unistd.h>
/**
 * print_sign - print the sign of a number
 * @n: check the sign if a number is upper or lower
 * Return: 1 if is upper, -1 if is lower and 0 if is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}

