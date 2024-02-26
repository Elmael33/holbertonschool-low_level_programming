#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int a;

	for ( a = 10; a++)
	{
		for ( a = '0'; a < '9'; a++)
		{
			_putchar(a);
			_putchar(a % 10 + '0');
		}
	}
	_putchar('\n');
}
