#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all possible combinaison of a single-digit numbers
 * Return: Alaways 0
 */
int main(void)
{
	char last;

	for (last = '0'; last <= '9'; last++)
	{
		putachar(last);
	}

	putchar('\n')
	return(0);
}
