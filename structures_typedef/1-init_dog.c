#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer
 * @name: pointer
 * @age: floater
 * @owner: pointer
 * Return: (always) succes
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
