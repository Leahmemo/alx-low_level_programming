#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with its name, age, and owner
 * init_dog - Initializes the variables to type struct dog
 * @d: pointer to the struct dog to be initialised
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
