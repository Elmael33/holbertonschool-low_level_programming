#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointeur
 * Return: 0
 */
void rev_string(char *s)
{
	int a, b, c;
	char *d, e;

	d = s;

	while (s[b] != '\0')
	{
		b++;
	}

	for (c = 1; c < b; c++)
	{
		d++;
	}

	for (a = 0; a < (b / 2); a++)
	{
		e = s[a];
		s[a] = *d;
		*d = e;
		d--;
	}
}
