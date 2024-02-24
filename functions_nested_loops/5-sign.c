#include "main.h"
#include <unistd.h>
/**
 * print_sign - print the sign of a number
 * Return: Always 0
 */
int print_sign(int numo)
{
	char numo;

	if (numo > '0')
	{
		putchar('+')
		return (1);
	}

	else if (numo < '0')
	{
		putchar('-')
		return (-1);
	}
	else 
	{
		putchar('0')
		return (0);
	}
}

