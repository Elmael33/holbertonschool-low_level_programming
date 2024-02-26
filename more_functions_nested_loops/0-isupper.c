#include "main.h"
#include <unistd.h>
/**
 * _isupper - checks for uppercase character
 * @c: Check if the character is upper
 * Return: 1 if c is upper, else always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
