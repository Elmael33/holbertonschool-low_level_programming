#include "main.h"
#include <stdio.h>
/**
 * 
 *
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		putchar(str[a]);
	}
	putchar('\n');
}
