#include "main.h"
#include <string.h>
/**
 * _strcmp - compare two string
 * @s1: string
 * @s2: string
 * Return: positve or negative value
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}

	return (0);
}
