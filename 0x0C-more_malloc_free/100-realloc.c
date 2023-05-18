#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - reallocates memory block
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 * @ptr: pointer to the new memory
 *
 * Return: ptr , NULL if failed
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	copy_size = old_size < new_size ? old_size : new_size;

	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
	memcpy(new_ptr, ptr, copy_size);
	free(ptr);
	}

	return (new_ptr);
}
