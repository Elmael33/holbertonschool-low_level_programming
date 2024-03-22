#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Prints a name
 * @name: pointer name
 * @f: pointer
 * Return: (always) succes
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
