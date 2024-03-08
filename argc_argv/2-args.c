#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: size of the array
 * @argv: array containing
 * Return: (always) succes
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
