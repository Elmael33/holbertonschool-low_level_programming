#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}

	while (b < n && ((dest[a]) = (src[b])))
	{
		a++;
		b++;
	}
	dest[a + n + 1] = '\0';

	return (dest);
}
