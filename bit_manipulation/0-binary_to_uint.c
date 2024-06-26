#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer of string
 * Return: unsigned int number or 0 if b is NULL.
 *
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
		n = (2 * n) + (b[i] - 48);
	}
	return (n);
}
