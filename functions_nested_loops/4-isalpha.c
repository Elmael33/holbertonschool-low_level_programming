#include "main.h"
#include <unistd.h>
/**
 * _isalpha - checks for alphabetic character
 * Return: Always 0
 */
int _isalpha(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}

