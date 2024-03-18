#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: integer
 * Return: (always) succes
 */
int sum_them_all(const unsigned int n, ...)
{
	int a;
	unsigned int b;
	va_list start;

	va_start(start, n);

	for (b = 0, a = 0; b < n; b++)
	{
		a += va_arg(start, int);
	}

	va_end(start);

	return (a);
}
