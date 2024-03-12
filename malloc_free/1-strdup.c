#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: character
 * Return: a
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int b = 0;
	unsigned int c = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[b])
	{
		b++;
	}

	a = malloc(sizeof(char) * b + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	while (str[c])
	{
		a[c] = str[c];
		c++;
	}
	return (a);
}
