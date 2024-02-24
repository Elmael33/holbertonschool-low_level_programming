#include "main.h"
#include <unistd.h>
/**
 * print_last_digit - print the last digit of a number
 * @numo: random number who print last digit
 * Return: Always 0
 */
int print_last_digit(int numo)
{
	int last_digit = numo % 10;

	if (last_digit < 0)
	{
		last_digit = -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
