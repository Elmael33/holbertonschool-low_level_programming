#include "main.h"
#include <unistd.h>
/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int a = 48;

	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
