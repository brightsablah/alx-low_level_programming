#include "dog.h"

/**
* init_dog - initializes a struct variable
* Description:
* @d: struct variable
* @name: struct element
* @age: struct element
* @owner: struct element
* Return: void
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
