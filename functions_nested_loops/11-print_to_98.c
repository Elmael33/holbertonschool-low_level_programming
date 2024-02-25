#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starter number and integer
 *
 * print_number - prints the integer value and including a negative sign
 * @numo: integer value to be printed as a string
 */

void print_number(int numo)
{
	if (numo < 0)
	{
		_putchar('-');
		numo = -numo;
	}
	if (numo >= 10)
	{
		print_number(numo / 10);
	}
	_putchar('0' + numo % 10);
}

void print_to_98(int n)
{
	int a, b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			print_number(a);

			if (a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (b = n; b >= 98; b--)
		{
			print_number(b);

			if (b != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
