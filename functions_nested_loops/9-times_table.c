#include "main.h"
#include <unistd.h>
/**
 *
 *
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
		
		if (characters <= 9)
			_putchar(' ');}
		else
			_putchar((characters / 10 + '0');

		_putchar((characters % 10) + '0');
	}
	putchar('\n');
}

