#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starter print
 */
void print_to_98(int n)
{
	int france;

	if (n <= 98)
	{
		for (france = n; france <= 98; france++)
		{
			_putchar(france / 10 + '0');
			_putchar(france % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n == 98)
	{
		_putchar('9');
		_putchar('8');
	}

	else if (n <= 111)
	{
		for (france = n; france <= 98; france--)
		{
			_putchar(france / 10 + '0');
			_putchar(france % 10 + '0');
			_putchar(',');
			_putchar(' ');

		}
	}
	
	else if (n <= 81)
	{
		for (france = n; france <= 98; france++)
		{
			_putchar(france / 10 + '0');
			_putchar(france % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n <= -10)
	{
		for (france = n; france <= 98; france++)
		{
			_putchar(france / 10 + '0');
			_putchar(france % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
