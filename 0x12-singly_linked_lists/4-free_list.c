#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
