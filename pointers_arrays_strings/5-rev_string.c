#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointeur
 * Return: 0
 */
void rev_string(char *s)
{
	int a = 0, b;
	char c;

	while (s[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a; b++)
	{
		c = s[b];
		s[b] = s[a - 1];
		s[a - 1] = c;
		a--;
	}
}
