#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes the variable of type
 * @d: Pointer to the dog name, age and owner
 * @name: The dog's name
 * @age: the age of the dog
 * @owner: the dog's owner
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
