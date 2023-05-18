#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - creates an array of integers with various ranges
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: pointer to the array created, NULL if failed
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int size;

	size = max - min + 1;

	if (min > max)
		return (NULL);

	arr = malloc(size * sizeof(int));

	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
