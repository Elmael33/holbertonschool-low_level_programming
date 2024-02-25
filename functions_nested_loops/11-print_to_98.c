#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starter print
 */
void print_to_98(int n)
{
	int a,b,c,d;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n == 98)
	{
		_putchar('9');
		_putchar('8');
	}

	else if (n >= 111)
	{
		for (b = n; b >= 98; b--)
		{
			_putchar(b / 100 + '0');
			_putchar((b / 10) %10 + '0');
			_putchar(b % 10 + '0');
			_putchar(',');
			_putchar(' ');

		}
	}

	else if (n <= 81)
	{
		for (c = n; c <= 98; c++)
		{
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n <= -10)
	{
		for (d = n; d <= 98; d++)
		{
			_putchar(d / 10 + '0');
			_putchar(d % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
