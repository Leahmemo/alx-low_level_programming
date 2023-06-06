#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted, 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	temp = (*head);
	free(temp);
	*head = (*head)->next;


	return (data);
}
