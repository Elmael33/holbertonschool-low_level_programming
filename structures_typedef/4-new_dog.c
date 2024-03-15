#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: (always) succes
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t len1;

	int a, b;

	for (a = 0; a[name]; a++)
	{
		printf("%d", a);
	}

	for (b = 0; b[owner]; b++)
	{
		printf("%d", b);
	}
	{
		len1 = malloc(sizeof (dog_t));
	}
	{
		if (len1 == NULL)
		{
			return (NULL);
		}
	}
	{
		len1-> name = malloc(a + 1);
		len1-> owner = malloc(b + 1);
	}
	if (dog_h = name = NULL && dog_h = owner = NULL)
	{
		free(len1->name);
		free(len1->owner);
		free(len1);
		return (NULL);
	}
}
void _copy
