#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - Frees memory allocated for a dog structure
  * @d: Pointer to the dog structure to free
  *
  * Return:
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
