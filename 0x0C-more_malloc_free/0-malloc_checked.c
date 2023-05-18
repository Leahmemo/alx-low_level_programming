#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - pointer to the allocated memory
 *@b: unsigned int representin the number of bytes to allocate
 * Return: pointer to the allocated memory,98 if failed
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}
