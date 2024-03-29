#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: pointer
 * Return: (always) succes
 */
void free_dog(dog_t *d)
{
	if (d == 0)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
