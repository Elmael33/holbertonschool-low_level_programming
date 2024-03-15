#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _copy - copy of name and owner
 * @c: pointer
 * @d: pointer
 */
void _copy(char *c, char *d)
{
	int e;

	for (e = 0; d[e]; e++)
		c[e] = d[e];
	c[e] = '\0';
}

/**
 * new_dog - creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: (always) succes
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *len1;

	int a, b;

	for (a = 0; a[name]; a++)
		;
	for (b = 0; b[owner]; b++)
		;

	len1 = malloc(sizeof(dog_t));

	if (len1 == NULL)
	{
		return (NULL);
	}

	len1->name = malloc(a + 1);
	len1->owner = malloc(b + 1);

	if (len1->name == NULL && len1->owner == NULL)
	{
		free(len1->name);
		free(len1->owner);
		free(len1);
		return (NULL);
	}

	_copy(len1->name, name);
	_copy(len1->owner, owner);
	len1->age = age;

	return (len1);
}
