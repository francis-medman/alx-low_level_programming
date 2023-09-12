#include <stddef.h>
#include "dog.h"

/**
  * init_dog - Initializes a struct dog
  * @d: A dog struct
  * @name: The dog's name
  * @age: The dog's age
  * @owner: The owner of the dog
  *
  * Return: Nothing
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
