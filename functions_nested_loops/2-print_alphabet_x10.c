#include "main.c"
#include <unistd.h>
/**
 * main - print alphabet 10x
 * Return: Always 0
 */
void print_alphabet_x10(void);
{
	int A = '0';
	char alphab;
	while (A++ < 10)
	{	
		for (alphab = 'a'; alphab <= 'z'; alphab++)
		{
			_putchar(alphab)
		}
		_putchar('\n')
	}
	return (0);
}
