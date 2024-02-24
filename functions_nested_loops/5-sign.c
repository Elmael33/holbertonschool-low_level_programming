#include "main.h"
#include <unistd.h>
/**
 * print_sign - print the sign of a number
 * @n: check the sign if a number is upper or lower
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n < '0')
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

