#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}
	while (a < n)
	{
		if (a < b)
		{
			dest[a] = src[a];
		}
		else
		{
			dest[a] = '\0';
		}
		{
			a++;
		}
	}
	return (dest);
}
