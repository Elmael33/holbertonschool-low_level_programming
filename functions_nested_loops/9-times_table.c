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
		_putchar('0');
	}

	for (symbols = 1; symbols <= 9; symbols++)
	{
		_putchar(',');
		_putchar(' ');
	}

	characters = numbers * symbols;

	if (characters <= 9)
	{
		_putchar(' ');
	}
	else
	{
		_putchar((characters / 10) + '0');
	}

	_putchar((characters % 10) + '0');

	_putchar('\n');
}


