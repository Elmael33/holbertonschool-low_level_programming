#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * @n: integer
 * Return: (always) succes
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, len1 = 0, len2 = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	c = (char *)malloc(sizeof(char) * (len1 + n + 1));

	if (c == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < len1; a++)
	{
		c[a] = s1[a];
	}

	for (b = 0; b < n; b++)
	{
		c[a + b] = s2[b];
	}

	c[a + b] = '\0';

	return (c);
}
