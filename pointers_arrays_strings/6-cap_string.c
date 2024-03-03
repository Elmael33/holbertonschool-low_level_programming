#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @a: string
 * Return: capitalized string
 */
char *cap_string(char *a)
{
	int b = 0, c;

	char e[] = "\n\t,;.!?\"(){}";

	if (a[0] >= 'a' && a[0] <= 'z')
	{
		a[0] -= 32;
	}
	for (; a[b] != '\0'; b++)
	{
		for (c = 0; c < 14; c++)
		{
			if (a[b] == e[c])
			{
				if (a[b + 1] >= 'a' && a[b + 1] <= 'z')
				{
					a[b + 1] -= 32;
				}
			}
		}
	}
	return (a);
}
