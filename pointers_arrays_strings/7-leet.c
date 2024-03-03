#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: string
 * Return: encoded string
 */
char *leet(char *a)
{
	int b = 0, c;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	while (a[b])
	{
		for (c = 0; letters[c]; c++)
		{
			if (a[b] == letters[c])
			{
				a[b] = numbers[c];
			}
		}
		b++;
	}
	return (a);
}
