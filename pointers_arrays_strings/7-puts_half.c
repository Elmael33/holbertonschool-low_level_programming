#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointeur
 * Return: 0
 */
void puts_half(char *str)
{
	int a = 0, b;

	while (str[a])
	{
		a++;
	}
	if (a % 2 == 0)
	{
		b = a / 2;
	}
	else
	{
		b = (a + 1) / 2;
	}
	while (b < a)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
