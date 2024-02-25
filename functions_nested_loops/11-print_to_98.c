#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starter print
 * Return: n to 98
 */
void print_to_98(int n)
{
	int france, bresil;

	if (n >= 98)
	{
		for (france = n; france <= 98; france++)
		{
			if (france != 98)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(france / 10 + '0');
				_putchar(france % 10 + '0');
			}
			else
			{
				_putchar(france / 10 + '0');
				_putchar(france % 10 + '0');
			}
		}
	}
	else if (n <= 98)
	{
		for (bresil = n; bresil >= 98; bresil--)
		{
			if (bresil != 98)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(bresil / 10 + '0');
				_putchar(bresil % 10 + '0');
			}
			else
			{
				_putchar(bresil / 10 + '0');
				_putchar(bresil / 10 + '0');
			}
		}
	_putchar('\n');
	}
}
