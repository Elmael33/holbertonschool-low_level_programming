#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: int
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
