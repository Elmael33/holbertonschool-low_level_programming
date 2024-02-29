#include "main.h"
#include <stdio.h>
/**
 * print_triangle -  prints a triangle, followed by a new line
 * @size: integer
 * Return: 0
 */
void print_triangle(int size)
{
	int a, b, c;
	{
		if (size > 0)
		{
			for (a = 0; a <= size; a++)
			{
				for (b = 0; b <= a; b++)
				{
					_putchar('#');
				}
				for (c = 0; c <= size; c++)
				{
					_putchar(' ');
				}
			}
			_putchar('\n')
		}
		else
		{
			_putchar('\n');
		}
	}
}
