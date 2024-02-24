#include "main.h"
#include <unistd.h>
/**
 * _abs - compute the absolute value of n
 * @n: absolute integer
 * Return: absolute value n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
		return (n);
}
