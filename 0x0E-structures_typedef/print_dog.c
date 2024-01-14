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
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			puts("Name: (nil)");
/*
*	if (d->age == 0)
*		puts("(nil)");
*	else
*/
		printf("Age: %.6f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			puts("(Owner: (nil)");
	}
}
