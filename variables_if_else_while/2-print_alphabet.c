#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check alphabet
 * Return: Always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
