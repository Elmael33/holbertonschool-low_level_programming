#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: integer
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
			return (s);
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
