#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0
 * @numbers, symbols, characters: actor value
 * Return: time table
 */
void times_table(void)
{
	int numbers, symbols, characters;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		for (symbols = 1; symbols <= 9; symbols++)
		{
			characters = numbers * symbols;

			if (symbols == 0)
			{
				_putchar(characters + '0');
			}
			else if (characters < 9 && symbols != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(characters + '0')
			}
			else if (characters >= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((characters / 10) + '0');
				_putchar((characters % 10) + '0'):
			}
		}
		_putchar('\n');
	}
}
