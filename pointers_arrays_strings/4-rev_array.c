#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse the content of an array of integers
 * @a: integer
 * @n: integer
 * Return: numbers values
 */
void reverse_array(int *a, int n)
{
	int b, c;

	for (b = 0; b < n / 2; b++)
	{
		c = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = c;
	}
}
