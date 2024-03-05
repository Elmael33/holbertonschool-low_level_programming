#include "main.h"
/**
 * _strspn - length of a prefix substring
 * @s: pointer
 * @accept: string to include
 * Return: initial pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b;

	while (s[a] != '\0')
	{
		if (s[a] == ' ')
		{
			break;
		}
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
			if (accept[b] == '\0')
			{
				break;
			}
			{
				a++;
			}
		}
	}
	return (a);
}
