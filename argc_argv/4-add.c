#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: size of the array
 * @argv: array containing
 * Return: (always) succes
 */
int main(int argc, char *argv[])

{
	int a, b, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
