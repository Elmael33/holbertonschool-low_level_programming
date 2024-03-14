#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: (always) succes
 */
int *array_range(int min, int max)
{
	int *a;
	int b, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);

	for (b = 0; b < len; b++)
		*(a + b) = min + b;

	return (a);
}
