#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Iterate over each element of the array and execute the provided function
 * @array: pointer to the input array that will be iterated over
 * @size:  size or length of the input array
 * @action: pointer to the function for the action to be performed
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
