#include "main.h"
/**
 * puts2 - print every other character of a string with their start
 * @str: pointeur
 * Return: 0
 */
void puts2(char * str)
{
	int a = 0;

	while (str[a])
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
