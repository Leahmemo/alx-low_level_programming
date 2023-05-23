#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the pointer to the struct dog
 * @d: pointer to the dog's name,age and owner
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);

	free(d);
}

