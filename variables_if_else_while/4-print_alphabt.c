#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the alphabet lower exept 'q' and 'e'
 * Return: Always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet ='a'; alphabet <='z'; alphabet++)
			if (alphabet !='q','e')
			putchar(alphabet);

	putchar('\n')

	return (0)
}
