#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
* free_dog - frees alocated memory
* Description:
* @d: pointer to allocated memory
*
* Return: void
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
