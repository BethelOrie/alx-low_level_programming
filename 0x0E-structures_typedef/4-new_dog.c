#include "dog.h"

/**
 *free_dog - free memory
 *@: array
 *Description: free memory to struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
