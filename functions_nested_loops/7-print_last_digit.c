#include "main.h"
#include <unistd.h>
/**
 * print_last_digit - print the last digit of a number
 * @n: random number who print last digit
 * Return: Last_digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last *= -1;
	}

	_putchar(last + '0');

	return (last);
}
