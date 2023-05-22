#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog yoohoo
 * @d: pointer to dog
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
