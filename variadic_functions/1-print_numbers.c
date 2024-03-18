#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - rints numbers, followed by a new line
 * @n: argument integer
 * @separator: separate pointer
 * Return: (always) succes
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list first;
	unsigned int a = 0;

	if (n > 0)
	{
		va_start(first, n);

		while (a < n)
		{
			printf("%d", va_arg(first, int));

			if (a != n - 1  && separator != NULL)
			{
				printf("%s", separator);
			}

			a++;
		}
		va_end(first);
	}
	printf("\n");
}
