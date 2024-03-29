#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters and initializes it
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;


	array = malloc(sizeof(char) * size);
	if (array == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	array[i] = c;

	return (array);
}
