#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - print alphabet 10x
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int g = 0;
	char alphab;

	while (g++ < 10)
	{
		for (alphab = 'a'; alphab <= 'z'; alphab++)
		{
			_putchar(alphab);
		}
		_putchar('\n');
	}
}
