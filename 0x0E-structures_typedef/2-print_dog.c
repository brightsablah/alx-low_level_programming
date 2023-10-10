#include "dog.h"
#include <stdio.h>

/**
* print_dog - prints struct dog
* Description:
* @d: pointer to struct dog
*
* Return: void
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name == NULL)
		puts("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
/*
*	if (d->age == 0)
*		puts("(nil)");
*	else
*/
		printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		puts("(Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
	}
}
