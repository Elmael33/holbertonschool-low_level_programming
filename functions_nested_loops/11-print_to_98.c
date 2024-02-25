#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_number - prints the integer value and including a negative sign
 * @num: integer value to be printed as a string
*/
void print_number(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 10)
		print_number(num / 10);

	_putchar('0' + num % 10);

}
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starter number and integer
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_number(i);

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			print_number(j);

			if (j != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
