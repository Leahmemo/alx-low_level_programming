#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
