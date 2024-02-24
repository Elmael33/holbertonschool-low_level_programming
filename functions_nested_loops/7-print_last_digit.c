#include "main.h"
#include <unistd.h>
/**
 * print_last_digit - print the last digit of a number
 * @numo: random number who print last digit
 * Return: Last_digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		(last_digit = -1);
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
