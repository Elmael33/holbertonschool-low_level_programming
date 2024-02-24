#include "main.h"
#include <unistd.h>
/**
 * print_sign - print the sign of a number
 * Return: Always 0
 */
int print_sign(int numo)
{
	if (numo > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (numo < '0')
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

