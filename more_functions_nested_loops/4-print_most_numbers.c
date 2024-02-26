#include "main.h"
#include <unistd.h>
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: 0
 */
void print_most_numbers(void)
{
	int a = 48;

	for (a = 48; a < 58; a++)
	{
		if (a != '4' && a != '2')
		{
			_putchar(a);
		}
	}
	_putchar(10);
}
