#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator - executes a function as a parameter,element of an array
 * @array: tab pointer
 * @size: size pointer
 * @action: actor pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (size < 1)
	{
		return;
	}

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (a = 0; a < size; a++)
	{
		(*action)(array[a]);
	}
}
