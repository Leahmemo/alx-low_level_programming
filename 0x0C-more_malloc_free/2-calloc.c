#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory to a string
 * @nmemb: array for which memory is allocated
 * @size: the size of the array
 *
 * Return: pointer allocated, NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);
	return (ptr);
}
