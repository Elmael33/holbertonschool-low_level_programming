#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all possible combinaison of a single-digit numbers
 * Return: Alaways 0
 */
int main(void)
{
	int last;

	for (last = '0'; last <= '9'; last++)
	{
		putchar(last);
		if (last < '9')
		{

		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');
	return(0);
}
