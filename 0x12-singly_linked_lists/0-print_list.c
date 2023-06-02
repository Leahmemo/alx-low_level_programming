#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to the array list_t
 *
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (count);
	}
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("%s", h->str);
	else
		printf("(nil)");

	count++;
	h = h->next;

	if (h != NULL)
		printf(", ");
	}
	return (count);
}
