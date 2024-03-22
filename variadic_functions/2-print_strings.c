#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints string
 * @separator: separate string
 * @n: number
 * Return: (always) succes
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list print;
        unsigned int a = 0;

        va_start(print, n);

        while (a < n)
        {
                char *str = va_arg(print, char *);

                if (str == NULL)
                        printf("(nil)");
                else
                        printf("%s", str);

                if (a != n - 1 && separator != NULL)
                        printf("%s", separator);

                a++;
        }

        printf("\n");

        va_end(print);
}
