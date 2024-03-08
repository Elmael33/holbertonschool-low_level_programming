#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -  multiplies two numbers
 * @argc: size of the array
 * @argv: array containing
 * Return: (always) succes
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%i\n", c);

	return (0);
}
