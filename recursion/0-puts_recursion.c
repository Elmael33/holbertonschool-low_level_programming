#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - rints a string using recursion
 * @s: Pointer
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		{
			return;
		}
	}
	_�putchar(*s);
	{
		s++;
	}
	_puts_recursion(s);
}
