#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check alphabet
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z');
	{
			putchar(alphabet);
			alphabet++;
	}
	putchar('\n');
	
	return (0);
}
