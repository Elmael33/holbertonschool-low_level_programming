#include "main.h"
#include <unistd.h>
/**
 * _islower - checks for lowercase character
 * @c: Check if the character is upper or lower
 * Return: Always 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
