#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int numberz;

	for (numberz = '0'; numberz <= '9'; numberz++)
	{
		putchar(numberz);
	}
	putchar('\n');
	return (0);
}
